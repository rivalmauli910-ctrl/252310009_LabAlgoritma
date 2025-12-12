#include <iostream>
using namespace std;

void tambah(int m, int n);

int main(){
    int a,b;
    a = 5;
    b = 9;

    cout << "Nilai sebelum fungsi digunakan\n";
    cout << "a = " << a << endl << "b = " << b << endl;

    tambah(a,b);

    cout << "Nilai setelah fungsi digunakan\n";
    cout << "a = " << a << endl << "b = " << b << endl;
    return 0; 
}

void tambah(int m, int n){
    m += 5;
    n += 5;
    cout << "Nilai di dalam fungsi\n";
    cout << "m = " << m << endl << "n = " << n << endl;
}
