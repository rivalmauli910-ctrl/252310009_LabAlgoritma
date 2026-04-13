#include <iostream>
using namespace std;

int main(){
	int nilai[20];
	int posisi[20];
	int i, n, bil, jmlh = 0;
	bool ketemu = false;
	
	cout << "Masukan jumlah deret bilangan = ";
	cin >> n;
	cout << endl;
	
	for(i = 0;i < n; i++) {
		cout << "Nilai bilangan ke- " << i << " = ";
		cin >> nilai[i];
	}
	
	cout << "\nDeret Bilangan = ";
	for(i = 0;i < n; i++){
		cout << nilai[i] << " ";
	}
	
	cout << "\n\nMasukan bilangan yang akan dicari = ";
	cin >> bil;
	
	for(i = 0;i < n; i++) {
		if(nilai[i] == bil){
			ketemu = true;
			posisi[jmlh] = i;
			jmlh++;
		}
	}
	
	if(ketemu) {
		cout << "\nBilangan " << bil << "Ditemukan sebanyak " << jmlh << "kali";
		cout << "\npada posisi indeks ke =";
		for(i =0;i<jmlh; i++){
			cout << posisi[i]<< " ";
		}
	} else {
		cout << "\n Maaf, bilangan " << bil << "Tidak ditemukan ";
	}
	
	cout << endl;
	return 0;
}
	
