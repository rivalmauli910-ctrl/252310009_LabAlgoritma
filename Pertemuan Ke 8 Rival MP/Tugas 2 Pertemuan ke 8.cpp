#include <iostream>
#include <string.h>
using namespace std;

int main() {

        char text[255] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";

        cout << text << endl;
        cout << "Kebalikan dari kalimat tersebut = " << strrev(text)<<endl;
        cout << "Merubah ke huruf kecil = " << strlwr(text)<<endl;

        getchar();
}
