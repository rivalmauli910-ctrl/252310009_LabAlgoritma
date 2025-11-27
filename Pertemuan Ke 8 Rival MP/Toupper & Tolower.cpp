#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main() 
{
	char teks[20], teks_baru[20];
	
	cout << "Tuliskan kata dengan huruf kapital = ";
	cin >> teks;
	
	for (int i=0; i<strlen(teks); i++) {
		if(teks[i] >= 'a' && teks[i] <= 'z'){
			teks_baru[i] = toupper(teks[i]);
		}
		else{
			teks_baru[i] = tolower(teks[i]);
		}
	}
	
	cout << "Hasil Perubahan = " << teks_baru << endl;
return 0;
}
