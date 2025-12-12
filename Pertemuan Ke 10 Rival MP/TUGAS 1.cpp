#include<iostream>
using namespace std;

int jumlahhuruf();

int main(){
    int hasil = jumlahhuruf();
    cout << "Jumlah hurufnya adalah : " << hasil << endl;
    return 0;
}

int jumlahhuruf(){
    string kalimat;
    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);
    return kalimat.length();
}
