#include <iostream>
using namespace std;

int main()
{
	int nilai [5] = {80,90,75,88,95};
	
	cout << "Daftar nilai array" << endl;
	
	for (int i = 0; i < 5; i++){
		cout << "Indeks ke-" << i << " = " << nilai[i] << endl;
	}
	
	return 0;
}
