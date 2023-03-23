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

	for (int i = 0; i < n; i++)						 // Mengguanakan perualangan for untuk menyimpan data pada array
	{
		cout << "Data ke- " << (i + 1) << ": ";		 // Memasukan atau menginputkan nilai data n 
		cin >> arr[i];							 // Menyimpan nilai data n kedalam array arr
	}
}

void insertionsort() {							// Procedure Insertionsort

	int temp;									// Membuat variable data temporer atau penyimpanan sementara
	int j;										// Membuat variable j sebagai penanda

	for (int i = 1; i < n; i++) {				// Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];							// simpan nilai arr[i] ke variable sementara temp

		j = i - 1;								// setting nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp)      // Looping while dimana nilai j lebih besar sama dengan 0 dan
			// arr[j] lebih besar daripada temp
		{
			arr[j + 1] = arr[j];			 // simpan arr[j] ke dalam variable arr[j+1]
			j = j - 1;						 // Decrement nilai j by 1
		}
		arr[j + 1] = temp;					// simpan nilai temp ke dalam arr[j+1]

		cout << "\nStep " << i << ": ";		// Output ke layar
		for (int k = 0; k < n; k++) {		// Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";			// Output ke layar
		}
	}
}

void display() {												// Procedure Display
	cout << endl;												// Output baris kosong 
	cout << "\n=================================" << endl;		// Output ke layar
	cout << "Element Array yang telah tersusun" << endl;		// Output ke layar
	cout << "=================================" << endl;		// Output ke layar

	for (int j = 0; j < n; j++) {								// Looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;									// Output ke layar
	}
	cout << endl;												// Output baris kosong
}

int main()
{
	input();							// memanggil input 
	insertionsort();					// memanggil insertionsort
	display();							// memanggil display
}