#include<iostream>
#include <string>

using namespace std;

class pelajaran {
	public:
		pelajaran() {
			cout << "Ini adalah materi c++ tentang constructors!" << endl;
		}
};

int main() {
	pelajaran obj;
	
	return 0;
}
