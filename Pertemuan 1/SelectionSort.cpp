#include <iostream>

using namespace std;

void selectionSort(int arr[], int n){
	int i, j, minIndex, temp;
	for (i=0; i<n; i++){
		minIndex = i;
		for(j = i+1; j<n; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
		cout << "Oterasi ke-" << i+1 << ": ";
		for(int k=0; k<n; k++){
			cout << arr[k] << " ";
		}
		cout << endl;
	}
}

int main (){
	int n, i;
	cout << "Masukan jumlah elemn: ";
	cin >> n;
	int arr[n];
	cout << "Masukan nilai elemen :";
	for (i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << "data sebelum sorting :";
	for (i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	selectionSort(arr, n);
	cout << "data seetelah sorting :";
	for ( i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
	
