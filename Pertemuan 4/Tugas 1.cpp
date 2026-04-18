#include <iostream>
using namespace std;

class Mahasiswa {
private:
    string nama;
    string nim;
    string jurusan;
    int umur;

public:
    // Setter
    void setNama(string n) {
        nama = n;
    }

    void setNIM(string n) {
        nim = n;
    }

    void setJurusan(string j) {
        jurusan = j;
    }

    void setUmur(int u) {
        umur = u;
    }

    // Getter
    string getNama() {
        return nama;
    }

    string getNIM() {
        return nim;
    }

    string getJurusan() {
        return jurusan;
    }

    int getUmur() {
        return umur;
    }
};

int main() {
    Mahasiswa mhs;

    string nama, nim, jurusan;
    int umur;

    cout << "=== Input Data Mahasiswa ===" << endl;

    cout << "Nama     : ";
    getline(cin, nama);
    mhs.setNama(nama);

    cout << "NIM      : ";
    getline(cin, nim);
    mhs.setNIM(nim);

    cout << "Jurusan  : ";
    getline(cin, jurusan);
    mhs.setJurusan(jurusan);

    cout << "Umur     : ";
    cin >> umur;
    mhs.setUmur(umur);

    cout << "\n=== Data Mahasiswa ===" << endl;
    cout << "Nama     : " << mhs.getNama() << endl;
    cout << "NIM      : " << mhs.getNIM() << endl;
    cout << "Jurusan  : " << mhs.getJurusan() << endl;
    cout << "Umur     : " << mhs.getUmur() << endl;

    return 0;
}
