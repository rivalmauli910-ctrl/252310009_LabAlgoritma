#include <iostream>
using namespace std;

int faktorial(int x);

int main(){
    int angka;
    cout << "Masukkan angka : " ;
    cin >> angka;
    int hasil = faktorial(angka);
    cout << "Faktorialnya adalah :" << hasil << endl;
}

int faktorial(int x){
    int faktor=1;
    for(int i=x;i>=1;i--){
        faktor *= x;
    }
    return faktor;
}
