#include <iostream>
using namespace std;

int arr[20]
int n;

void input() {
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 Eleman.\n";
		}
	}

}