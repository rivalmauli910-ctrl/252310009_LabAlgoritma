#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string penulis;
    string penerbit;
    int tahun;
};

int main() {
    Buku daftarBuku[3] = {
        {"All Tomorrows", " C.M. Kösemen", "Random House", 2006},
        {"Blood Meridian", "Cormac McCarthy", "Self-published", 1985},
        {"Azathoth", "H.P Lovecraft", "Arkham House", 1938}
    };

    string cariJudul;
    bool ditemukan = false;

    cout << "Masukkan judul buku yang ingin dicari: ";
    getline(cin, cariJudul);

    for (int i = 0; i < 3; i++) {
        if (daftarBuku[i].judul == cariJudul) {
            cout << "\nBuku ditemukan!" << endl;
            cout << "Judul   : " << daftarBuku[i].judul << endl;
            cout << "Penulis : " << daftarBuku[i].penulis << endl;
            cout << "Penerbit: " << daftarBuku[i].penerbit << endl;
            cout << "Tahun   : " << daftarBuku[i].tahun << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "\nBuku tidak ditemukan." << endl;
    }

    return 0;
}

