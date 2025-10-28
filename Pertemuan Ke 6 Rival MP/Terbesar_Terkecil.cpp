#include <iostream>
using namespace std;

int main()
{
	int angka[6];
	int terbesar, terkecil;
	
	cout << "Masukan 5 bilangan :" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Nilai ke-" << i + 1 << ": ";
		cin >> angka[i];
	}
	
	terbesar = angka[0];
	terkecil = angka[0];
	
	for (int i = 1; i < 5; i++) {
		if (angka[i] > terbesar)
			terbesar = angka[i];
		if (angka[i] < terkecil)
			terkecil = angka[i];
	} 
	
	cout << "\nBilangan terbesar = " << terbesar << endl;
	cout << "Bilangan terkecil = "<< terkecil << endl;
	
	return 0;
}
