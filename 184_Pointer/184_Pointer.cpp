#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	void showNim();		// Deklarasi method
};


void Mahasiswa::showNim() {		// implementasi method diluar class
	cout << " No Induk = " << nim << endl;
}

int main()
{
	Mahasiswa mhs{ 1 };		// object name
	mhs.showNim();			// member access operator

	Mahasiswa& ref = mhs;	// pointer reference refMhs
	ref.nim = 2;			// member access operator
	mhs.showNim();
}