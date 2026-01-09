#include <iostream>
using namespace std;


void validasiNilai(int *nilai) {
    if (*nilai < 0) {
        *nilai = 0;
    } else if (*nilai > 100) {
        *nilai = 100;
    }
}

int main() {
    int angka;

    cout << "Masukkan nilai: ";
    cin >> angka;

    validasiNilai(&angka);

    cout << "Nilai setelah divalidasi: " << angka << endl;

    return 0;
}
