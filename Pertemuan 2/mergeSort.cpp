#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{ 
	int x, y, z;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	int L[n1], R[n2];
	for (x = 0; x<n1; x++)
		L[x] = arr[l + x];
	for (y=0; y<n2; y++)
		R[y] = arr[m + 1 + y];
		
	
	x=0;
	y=0;
	z=l;
	while(x < n1 && y < n2)
	{
		if(L[x] <= R[y])
		{
			arr[z] = L[x];
			x++;
		}
		else {
			arr[z] = R[y];
			y++;
		}
		z++;
	}
	while(x<n1){
		arr[z] = L[x];
		x++;
		z++;
	}
	while(y<n2){
		arr[z] = R[y];
		y++;
		z++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if(l<r){
		int m = l + (r-l)/2;
		
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		
		merge(arr, l, m, r);
	}
}

void show(int A[], int size){
	int i;
	for(i=0; i<size; i++)
		cout << A[i] << " ";
}
 int main(){
 	int size;
 	cout << "\nMasukan Banyak Data : ";
 	
 	cin >> size;
 	int arr[size];
 	
 	for(int i=0; i<size; ++i){
 		cout << "\nMasukan Data Array ke "<<i<<" : ";
 		cin >> arr[i];
	}
	
	mergeSort(arr, 0, size -1);
	
	cout << "Hasil\n";
	show(arr, size);
	return 0;
 }

