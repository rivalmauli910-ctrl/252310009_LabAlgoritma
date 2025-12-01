#include <iostream>
using namespace std;

int main() {

    int matriks[3][3];   

    cout << "INPUT DATA MATRIKS 3 x 3\n";

    for(int i = 0; i < 3; i++) {          
        for(int j = 0; j < 3; j++) {  
            cout << "Masukkan nilai [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }

    cout << "HASIL MATRIKS : " << endl;

    for(int i = 0; i < 3; i++) {        
        for(int j = 0; j < 3; j++) {      
            cout << matriks[i][j] << "\t";  
        }
        cout << endl;  
    }

    return 0;
}

