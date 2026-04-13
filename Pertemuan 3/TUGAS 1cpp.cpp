#include <iostream>
using namespace std;

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int n = sizeof(data) / sizeof(data[0]);
    int cari;
    bool ketemu = false;

    cout << "Masukkan angka yang dicari: ";
    cin >> cari;

    for (int i = 0; i < n; i++) {
        if (data[i] == cari) {
            cout << "Data ditemukan di indeks ke-" << i << endl;
            ketemu = true;
            break;
        }
    }

    if (!ketemu) {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}
