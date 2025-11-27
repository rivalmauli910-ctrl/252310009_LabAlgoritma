#include <iostream>
#include <string.h>
using namespace std;
    int main() {
        char k1[255] = "Teknik ";
        char k2[255] = "Informatika";

        cout << "Kata pertama: " << k1 << endl;
        cout << "Kata kedua: " << k2 << endl;

        cout << "Penggabungan kedua kata: " << strcat(k1, k2) << endl;

        getchar();
    }
