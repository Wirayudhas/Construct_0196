#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {

public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printALL();

	Mahasiswa(string pnama) :nama(pnama) {
		setID();
	}
};
int Mahasiswa::nim = 196;

void Mahasiswa::setID() {
	id = ++nim;
}

