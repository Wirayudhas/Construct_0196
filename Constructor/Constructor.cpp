#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
public:

	Mahasiswa() {
		nim = 0;
		nama = "";
	}
	Mahasiswa(int iNim) {
		nim = iNim;
	}

	Mahasiswa(string);
	Mahasiswa(int iNim, string iNama);
	void cetak();
};



Mahasiswa::Mahasiswa(string iNama) {
	nim = 0;
	nama = iNama;
}


void Mahasiswa::cetak() {
	cout << endl << "Nim = " << nim << endl;
	cout << "Nama = " << nama << endl;
}

int main() {
	Mahasiswa mhs1("popol");
	Mahasiswa mhs2("kupa");
	Mahasiswa mhs3("Beta");
	Mahasiswa mhs4("Alpha");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

}