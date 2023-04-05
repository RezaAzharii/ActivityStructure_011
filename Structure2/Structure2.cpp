#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa
{
	string NIM;
	string Nama;
	DetailAlamat Alamat;
	int Umur;

};

int main() 
{
	Mahasiswa mhs;

	cout << "Masukan NIM = ";
	cin >> mhs.NIM;
	cout << "Masukan Nama = ";
	cin >> mhs.Nama;
	cout << "Alamat = " << endl;
	cout << "\tMasukan desa = ";
	cin >> mhs.Alamat.desa;
	cout << "\tMasukan kota = ";
	cin >> mhs.Alamat.kota;
	cout << "Masukan umur = ";
	cin >> mhs.Umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nAlamat = " << mhs.Alamat.desa;
	cout << "\nAlamat = " << mhs.Alamat.kota;
	cout << "\numur = " << mhs.Umur;


}
