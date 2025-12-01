#include <iostream>
using namespace std;

int main() {
    int r, c, a[100][100], b[100][100], mul[100][100];
    int i, j, k;

    cout << "Masukkan jumlah baris (1 - 100): ";
    cin >> r;

    cout << "Masukkan jumlah kolom (1 - 100): ";
    cin >> c;

    cout << endl << "Masukan matriks pertama:" << endl;
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            cout << "Matriks a[" << i+1 << "][" << j+1 << "]: ";
            cin >> a[i][j];
        }
    }

    cout << endl << "Masukkan matriks kedua:" << endl;
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            cout << "Matriks b[" << i+1 << "][" << j+1 << "]: ";
            cin >> b[i][j];
        }
    }

    // Inisialisasi hasil ke 0
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            mul[i][j] = 0;
        }
    }

    // Proses perkalian matriks
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            for (k = 0; k < c; k++) {  
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << endl << "Hasil perkalian matriks:" << endl;
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
}
