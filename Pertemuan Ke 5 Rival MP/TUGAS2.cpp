#include <iostream>
using namespace std;

int main() {
    int n;
    bool prima = true;

    cout << "Masukkan sebuah bilangan: ";
    cin >> n;

    if (n <= 1) {
        prima = false;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prima = false;
                break;
            }
        }
    }

    if (prima)
        cout << "Termasuk bilangan PRIMA" << endl;
    else
        cout << "Bukan termasuk bilangan PRIMA" << endl;

    return 0;
}
