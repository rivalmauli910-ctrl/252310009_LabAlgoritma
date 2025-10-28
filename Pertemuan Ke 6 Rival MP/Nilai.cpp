#include <iostream>
using namespace std;

int main()
{
	int nilai[5];
	int total = 0;
	
	cout << "Masukan 5 niali mahasiswa: ";
	for (int i = 0; i < 5; i++) {
		cin >> nilai[i];
		total += nilai[i];
	}
	
	cout << "\nDaftar nilai mahasiswa: " << endl;
	for (int i= 0; i < 5; i++) {
		cout << "Nilai ke-" << i + 1 << " = " << nilai[i] << endl;
	}
	
	float rataRata = (float)total / 5;
	cout << "\nRata Rata Nilai = " << rataRata << endl;
	
	return 0;
}
