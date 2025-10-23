#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah baris = ";
    cin >> n;

    int size = n * 2 - 1; 

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            
            if ( (i + j > n) && (j - i < n) && 
                 (i - j < n) && (i + j < 3 * n) ) {
                cout << "  "; 
            } else {
                cout << "* "; 
            }
        }
        cout << endl;
    }

    return 0;
}
