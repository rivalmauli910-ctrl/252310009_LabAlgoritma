#include <iostream>
using namespace std;

int main() {
    int n;
    char ulang;

    do {
        cout << "Masukkan bilangan: ";
        cin >> n;

        int i = 1, faktorial = 1;
        while (i <= n) {
            faktorial *= i;
            i++;
        }

        cout << "Hasil " << n << "! = " << faktorial << endl;
        cout << "Ulangi lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
