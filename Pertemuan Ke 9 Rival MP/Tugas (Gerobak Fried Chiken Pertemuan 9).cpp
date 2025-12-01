#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n; // banyak jenis
    char kode;
    int banyak;
    int harga, subtotal;
    int total = 0;

    cout << "GEROBAK FRIED CHICKEN\n";
    cout << "---------------------\n";
    cout << "Kode   Jenis       Harga\n";
    cout << "---------------------------\n";
    cout << "D      Dada        Rp 2500\n";
    cout << "P      Paha        Rp 2000\n";
    cout << "S      Sayap       Rp 1500\n";
    cout << "---------------------------\n\n";

    cout << "Banyak Jenis : ";
    cin >> n;

    cout << endl;

    for (int i = 1; i <= n; i++) {
        cout << "Banyak Jenis: " << i << endl;
        cout << "Jenis potong (D/P/S): ";
        cin >> kode;
        cout << "Banyak Potong       : ";
        cin >> banyak;

        // Tentukan harga berdasarkan kode
        switch (kode) {
            case 'D':
            case 'd':
                harga = 2500;
                break;

            case 'P':
            case 'p':
                harga = 2000;
                break;

            case 'S':
            case 's':
                harga = 1500;
                break;

            default:
                cout << "Kode tidak valid! Harga dianggap 0.\n";
                harga = 0;
        }

        subtotal = harga * banyak;
        total += subtotal;

        cout << "Jumlah Harga: Rp " << subtotal << "\n\n";
    }

    float pajak = total * 0.10;
    float total_bayar = total + pajak;

    cout << "==========================================\n";
    cout << "Jumlah Bayar     : Rp " << total << endl;
    cout << "Pajak 10%       : Rp " << pajak << endl;
    cout << "Total Bayar     : Rp " << total_bayar << endl;
    cout << "==========================================\n";

    return 0;
}
