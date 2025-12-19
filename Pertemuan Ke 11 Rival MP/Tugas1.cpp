#include <iostream>
using namespace std;

// fungsi tukar menggunakan pointer
void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;

    cout << "Masukkan nilai A: ";
    cin >> A;
    cout << "Masukkan nilai B: ";
    cin >> B;

    // proses penukaran
    tukar(&A, &B);

    cout << "Hasil Penukaran:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    return 0;
}
