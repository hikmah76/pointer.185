#include <iostream>
using namespace std;


class mahasiswa {
public:
	int nim;
	void showNim(); // deklarasi method
};

void mahasiswa::showNim() { // implementasi mwthod diluar class 
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };  // object mhs
	mhs.showNim();      // Number Acces Operator

	mahasiswa* pMhs = &mhs; // pointer reference  reFMHS
}

