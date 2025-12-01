#include <iostream>
using namespace std;

int main()
{
	int r, c, a[100][100], b [100][100], sum[100][100], i, j;
	
	cout << "Masukan jumlah baris (1-100): ";
	cin >> r;
	
	cout << "Masukan Jumlah kolom (1-100): ";
	cin >> c;
	
	cout << endl << "Masukan matriks pertama :" << endl;
	for (i = 0; i < r; ++i){
		for (j = 0; j < c; ++j){
			cout << "Matriks a[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> a[i][j];
		}
	}
	
	cout << endl << "Masukan matriks kedua: " << endl;
	for (i = 0; i < r; ++i) {
		for (j = 0; j < c; ++j) {
			cout << "Matriks b[" << i + 1 << "][" << j + 1 << "J: ";
			cin >> b[i][j];
		}
	}
	
	// Proses Penjumlahan
	for (i = 0; i < r; ++i) {
		for (j = 0; j < c; ++j) {
			sum[i][j] = a[i][j] + b [i][j];
		}
	}
	
	cout << endl << "Hasil penjumlahan kedua matriks : " << endl;
	for (i = 0; i < r; ++i) {
		for (i = 0; j < c; ++j) {
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
