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
