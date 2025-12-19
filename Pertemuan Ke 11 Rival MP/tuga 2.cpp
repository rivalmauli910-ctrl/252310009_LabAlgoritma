#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat, hasil = "";
    int i;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    i = kalimat.length();

    while (i > 0) {
        hasil += kalimat[i - 1];
        i--;
    }

    cout << "Hasil: " << hasil << endl;

    return 0;
}
