#include<stdio.h>
#include<iostream>
using namespace std;

int panjangkarakterdalamkalimat(string kalimat, char karakter){
    int count = 0;
    for(int i = 0; i < kalimat.length(); i++){
        if(kalimat[i] == karakter){
            count++;
        }
    }
    return count;
}
int main(){
    int kalimat;
    string inputkalimat;
    char karakter;        
    cout << "Masukkan kalimat: ";
    getline(cin, inputkalimat);
    cout << "Karakter yang ingin dihitung : ";
    cin >> karakter;
    kalimat = panjangkarakterdalamkalimat(inputkalimat,karakter);
    cout << "Panjang karakter dalam kalimat: " << kalimat << endl;
    return 0;
}
