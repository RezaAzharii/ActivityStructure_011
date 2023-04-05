#include <iostream>
using namespace std;

struct Mahasiswa
{
	string NIM;
	string Nama;
	string Alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs;

	cout << "Masukan NIM = ";
	cin >> mhs.NIM;
	cout << "Masukan Nama = ";
	cin >> mhs.Nama;
	cout << "Masukan Alamat = ";
	cin >> mhs.Alamat;
	cout << "Masukan umur = ";
	cin >> mhs.umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\Alamat = " << mhs.Alamat;
	cout << "\numur = " << mhs.umur;

}