#include <iostream>
using namespace std;

class siswa;

class orang {
private:
	string nama;
public:
	void setNama(string pNama);
	friend class siswa;
};

class siswa {
private:
	int Id;
public:
	void setId(int pId);
	void displayAll(orang& a);
};


void siswa::displayAll(orang& a) {
	cout << Id << endl << a.nama;
}

void siswa::setId(int pId) {
	Id = pId;
}

void orang::setNama(string pNama) {
	nama = pNama;
}
