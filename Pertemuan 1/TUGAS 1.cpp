#include <iostream>
using namespace std;

int main() {
	int n;
	cout << " jumalah buku: ";
	cin >> n;
	cin.ignore();
	
	string buku [n];
	
	// input judul buku
	for (int i = 0; i < n; i++) {
		cout << " judul buku ke-" << i + 1 << ": ";
		getline(cin, buku[i]);
	}
	
	// tampilkan sebelum sorting
	cout << "\nsebelum sorting:\n";
	for (int i = 0; i < n; i++) {
		cout << buku [i] << endl;
	}
	
	// bubble short
	for (int i = 0; i < n -1; i++) {
		for (int j = 0; j < n - i -1; j++) {
			if (buku[j] > buku [j + 1]) {
				string temp = buku[j];
				buku[j] = buku[j + 1];
				buku[j + 1] = temp;
			}
		}
	}
	
	// tampilkan setelah sorting
	cout << "\nsetelah sorting (A-Z:\n";
	for (int i = 0; i < n; i++) {
		cout << buku[i] << endl;
	}
	
	return 0;
}
