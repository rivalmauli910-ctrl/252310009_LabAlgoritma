#include <iostream>
#define HARGA 4500.02  // menentukan harga dengan define

using namespace std;

int main() {
	
    float jumlah, total;

    cout << "Masukan Jumlah Barang = ";
    cin >> jumlah;
	total = HARGA * jumlah;
	cout << "\nYang harus dibayar = " << total;
    return 0;
}
