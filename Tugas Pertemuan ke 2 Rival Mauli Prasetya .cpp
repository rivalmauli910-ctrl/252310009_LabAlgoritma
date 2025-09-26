#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Penjumlahan
    cout << "=== Operasi Penjumlahan ===" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << a << " + " << b << " = " << (a + b) << endl << endl;

    // Pengurangan
    cout << "=== Operasi Pengurangan ===" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << a << " - " << b << " = " << (a - b) << endl << endl;

    // Perkalian
    cout << "=== Operasi Perkalian ===" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << a << " * " << b << " = " << (a * b) << endl << endl;

    return 0;
}
