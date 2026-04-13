#include <iostream>
using namespace std;

int main() {
    string buku[] = {"Algoritma", "BasisData", "Jaringan", "Pemrograman", "StrukturData"};
    int rak[] = {1, 2, 3, 4, 5}; // posisi rak
    int n = 5;

    string cari;
    int kiri = 0, kanan = n - 1;
    bool ketemu = false;

    cout << "Masukkan judul buku: ";
    cin >> cari;

    while (kiri <= kanan) {
        int mid = (kiri + kanan) / 2;

        if (buku[mid] == cari) {
            cout << "Buku ditemukan di rak ke-" << rak[mid] << endl;
            ketemu = true;
            break;
        } 
        else if (buku[mid] < cari) {
            kiri = mid + 1;
        } 
        else {
            kanan = mid - 1;
        }
    }

    if (!ketemu) {
        cout << "Buku tidak ditemukan" << endl;
    }

    return 0;
}
