#include <iostream>
using namespace std;

// Membuat class Mahasiswa
class Mahasiswa {
private:
    string nama;

public:
    // Constructor
    Mahasiswa(string n) {
        nama = n;
        cout << "Constructor dipanggil, objek dibuat!" << endl;
    }

    // Destructor
    ~Mahasiswa() {
        cout << "Destructor dipanggil, objek dihapus!" << endl;
    }

    void tampil() {
        cout << "Nama: " << nama << endl;
    }
};

int main() {
    // Membuat objek
    Mahasiswa mhs("Rival");

    // Menampilkan data
    mhs.tampil();

    return 0;
}
