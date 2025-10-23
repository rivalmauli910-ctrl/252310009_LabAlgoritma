#include <iostream>
using namespace std;

int main () 
{
	int a, b = 5;
	
	while (b >= 1) {
		a = 1;
		
		while (a <= b) {
			cout << a*b << " ";
			a++;
		}
		
		cout << "\n";
		b--;
	}
	
	return 0;
}
