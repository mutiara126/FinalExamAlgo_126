#include <iostream>
#include <string>
using namespace std;

class Node
{
public :
	string info;
	Node* jurusan;
	Node* Nama;
	Node* NIM;
	Node* tahunMasuk;
	Node* jumlahMahasiswa;
	

};
const int MAX_MAHASISWA = ;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

class BinaryTree
{
public :
	Node* jurusan;
	Node* Nama;
	Node* NIM;
	Node* tahunMasuk;
	Node* jumlahMahasiswa;

	BinaryTree()
	{
		jurusan = NULL; 
	}

};
void tambahMahasiswa(
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[10];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[mutiara]);
		cout << "Jurusan : ";
		getline(cin, jurusan[TI]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[2022];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
);
//isi disini
void tampilkanSemuaMahasiswa();
//isi disini
void algorithmacariMahasiswaByNIM();
//isi disini
void algorithmaSortByTahunMasuk();
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			cout << "tambah mahasiswa: ";
			string word;
			cin >> word;
			break;
		case 2:
			cout << "Tampilkan Semua Mahasiswa: ";
			string word;
			cin >> word;
			break;
		case 3:
			cout << "Cari Mahasiswa berdasarkan NIM: ";
			string word;
			cin >> word;
			break;
		case 4:
			cout << "Tampilkan Mahasiswa berdasarkan Tahun Masuk: ";
			string word;
			cin >> word;
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}
//2.Binary SearchTree
//3. stack adalah operasi menyimpan data seperti menumpuk buku disebuah dus dgn prinsip (LIFO)/tumpukan data sedangkan queue adalah struktur data linier yg mengikuti prinsip first-in-first-out
//4. pada saat ingin menyimpan data dengan cara menambah serta mengambil data tersebut
//5. a. 3
//5. b. preorder = 25 adalah root, 20 subtree dari root 25, 10 subtree dari 20, 5 subtree dari 10, dan 1 subtree dari 5. 8 anak dari 5, 15 anak dari 12, 12 anak dari 10, 22 anak dari 20. 36 subtree dari 25, 30 anak dari 36, 28 anak dari 30, 40 subtree dari 36, 38 anak dari 40, 48 subtree dari 40, 45 dan 50 anak dari root yang sama yaitu 48
