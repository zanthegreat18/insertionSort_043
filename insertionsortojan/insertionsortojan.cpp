#include <iostream>
using namespace std;

int arr[20];						// Membuat Array dengan panjang data 20
int n;								// Membuat Variable inputan n

void input() {						//Procedure Input
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
		cin >> n;									 // memanggil variable inputan n

		if (n <= 20) {								 // membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\n Array yang anda masukkan maksimal 20 elemen. \n"; // Menampilkan Pesan Jika  data lebih dari 20
		}
	}
	cout << endl;									 // Membuat jarak perbaris program 
	cout << "=====================" << endl;		 // Membuat tampilan susunan data elemen array
	cout << "Masukan Element Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++)						 // Mengguanakan perualanga for untuk menyimpan data pada array
	{

	}
}