#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printALL();

	static void setNim(int pNim) { nim = pNim; /*Definisi Function*/ }
	static int getNim() { return nim; /*Definisi Function*/ }

	Mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int Mahasiswa::nim = 196;

void Mahasiswa::setID() {
	id = ++nim;
}

void Mahasiswa::printALL() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	Mahasiswa mhs1("Sri Dadi");
	Mahasiswa mhs2("Budi Jatmiko");
	Mahasiswa::setNim(9);
	Mahasiswa mhs3("Andi janu");
	Mahasiswa mhs4("Joko Wahoono");

	mhs1.printALL();
	mhs2.printALL();
	mhs3.printALL();
	mhs4.printALL();

	cout << "aksws dari luar project" << Mahasiswa::getNim() << endl;
	system("pause");

}