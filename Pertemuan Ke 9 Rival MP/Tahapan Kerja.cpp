#include <iostream>     // library header file = standard input and output stream library
#include <iomanip>      // library digunakan untuk format C++ yang akan di output
using namespace std;

int main() { // menyatakan awal dari program inti c++ yang akan di output
    int hasill[3][3];   // bentuk umum array -- 3 baris dan 3 = kolom

    // looping untuk menginput nilai hasil penjumlahan
    for(int a = 0; a < 3; a++) {          // untuk variabel a mulai dari 0 akan increment sampai < 3 atau sampai 2 untuk indeks 0
        for(int b = 0; b < 3; b++) {      // untuk variabel a mulai dari 0 akan increment sampai < 3 atau sampai 2 untuk indek 0
        	cout << "Data "<< a <<" - " << b << " = "; // Output data dengan mengeluarkan nilai a dan b saat itu
            cout << "\nJumlah Penjumlahan : ";
            cin >> hasill[a][b];          // menginput nilai array mulai dari indeks [0][0] sampai [2][2]
        }
    }

    cout << "\nHASIL PENJUALAN BARANG\n";   // end line output “Hasil Penjualan Barang”
    cout << "==========================\n";  // end line output tanda sama dengan pembatas
    cout << "2001  | 2002   | 2003  |\n" ;  // end line output tahun yang sudah ditentukan dan dibatasi dengan |
    cout << "==========================\n";  // end line output tanda sama dengan pembatas

    // looping untuk mengeluarkan nilai array
    for(int a = 0; a < 3; a++) {            // loop akan mulai dari 0 sampai 2 menghasilkan 3 baris
        for(int b = 0; b < 3; b++) {        // loop dari 0 sampai 2 menghasilkan 3 kolom
            cout << hasill[a][b] << "|\t";    // akan mengeluarkan nilai sesuai baris dan kolom
        }
        cout << endl;                       // output nilai jika inner loop selesai
    }

    return 0;
}


