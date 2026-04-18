#include<iostream>

using namespace std;

class laptop {
	private :
		string pemilik;
		string merk;
		
	public :
		laptop(string var1, string var2) {
			pemilik = var1;
			merk = var2;
			
			cout << "Paket laptop " << merk << "milik " << pemilik << " Sudah dikirim " << endl;
		}
};

int main() {
	laptop laptopfadlan("fadlan", "asus");
	laptop laptoprisma("risma"," acer");
	laptop laptopsophie("sophie", "lenovo");
	
	return 0;
}
