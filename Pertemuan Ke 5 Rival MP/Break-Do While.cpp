#include <iostream>
using namespace std;

int main () 
{
	int x, bil = 0;
	cout << "Masukan bilangan pembatas akhir : ";
	cin >> x;
	
	do
	{ 
		if (bil >= x)
		break;
		cout << bil << " ";
	}	
	while (bil+=4);
	
	getchar();
}
