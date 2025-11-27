#include <iostream>
#include <string.h>
using namespace std;
int main() 
{
	char huruf[20];
	char pindah[20];
	//clrscr();
	
	cout <<"Masukan Sembarang Kata = ";
	cin >> huruf;
	
	cout << "Panjang kata yang diinputkan = ";
	cout << strlen(huruf);
	
	getchar();
}
