#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
	ofstream myfile;
	myfile.open("text.exe", ios::app);
	
	cout << "Operasi file offstream" <<endl;
	cout << "---------------" <<endl;
	
	if (!myfile.fail())
	{
		myfile << "Belajar operasi file offstream" <<endl;
		myfile.close();
		cout << "Text telah ditulis ke dalam file" <<endl;
	}
	else
	{
		cout << "File tidak di temukan" <<endl;
	}
	
	getchar();
}
