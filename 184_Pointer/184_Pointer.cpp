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
	mhs.showNim();			// Member Access Operator

	Mahasiswa& ref = mhs;	// pointer reference refMhs
	ref.nim = 2;			// Member Access Operator
	mhs.showNim();

	Mahasiswa* pMhs = &mhs;		// Pointer Deferences pMhs
	pMhs->nim = 3;				// Arrow operator
	mhs.showNim();
	system("pause");
	return 0;
}