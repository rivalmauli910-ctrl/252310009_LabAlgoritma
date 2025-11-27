#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
	char kalimat[100];
	
	cout << "Masukan Kalimat: ";
	cin.getline(kalimat, sizeof(kalimat));
	
	int x = strlen(kalimat);
	cout << "Kalimat Terbalik: ";
	for (int i = x - 1; i >= 0; i--){
		cout << kalimat[i];
	}
	
	cout << endl;
	return 0;
}
