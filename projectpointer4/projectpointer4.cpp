#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
	string nama;
public:
	friend void setNama(Mahasiswa& a, string);
};

void setNama(Mahasiswa& a, string pNama) {
	a.nama = pNama;
	cout << "Nama: " << a.nama;
}
int main()
{
	Mahasiswa mhs;
	setNama(mhs, "Joko Kumat");
	cout << endl;
	system("pause");
	return 0;
}