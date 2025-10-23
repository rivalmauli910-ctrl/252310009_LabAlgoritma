#include <iostream>
using namespace std;

int main () 
{
	int a, bil=1;
	
	cout << "Masukan bilangan pembatas akhir =";
	cin >> a;
	
	while(bil<=a) {
		cout << bil << " ";
		bil++;
		
	}
	
	getchar();
}
