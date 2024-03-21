// 1. bubble sort menggunakan i dan i-1 jadi jika terdapat index 0 sampai 4 maka array yang di dapatkan ada 5 dan n = 5 
//    terus jika index 1 lebih kecil dari index 0 maka dilakukannya tukar i 1 berada di i 0 dan sebaliknya dan jika tdak ada
//    pertukaran maka lanjutkan sampai index terakhir lalu lakukan lah kembali dari awal dan status nya sudah menjadi pass 2
//    lakukan sampai index terakhir jika sudah urut semuanya maka bisa dinyatakan selesai pada bubble sort tersebut

// 2. shell sort dilakukan pemisahan array dan dikelompokkan sesuai increment nya misal incrementnya 3 maka dari index 0 diambil 
//    lagi pada index ke 3 lakukan sampai array selesai dan jika sudah menjadi 3 list atau lebih maka di urutkan sesuai dari
//    yang terkecil dan jika sudah urut di dalam kelompok tersebut maka gabungkannlah semua kelmpok jadi satu lalu lanjut pada 
//    increment 2 yang mengelompokkan array sesuai dengan 2 jarak index lalu urutkan kembali jika sudah gabungkan dan misal belum
//    urut semua lakukanlah increment yang terakhir atau incremenet 1 dan langsung saja di urutkan semua nya dan dapat dinyatakan
//    selesai

// 3. jika sudah ada algoritma yang urut maka kita haru mengecek lagi bagian yang lain apakah sudah benar atau belum
//    jika blum maka kita bisa urutkan bagian yang salah.


#include <iostream>
using namespace std;
int kevin[27];
int n;

void input() {

	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 27)
			break;
		else {
			cout << "\rArray dapat mempunyai maksimal 27 elemen.\n";
		}
	}
	cout << endl;
	cout << "===============" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "===============" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> kevin[i];

	}
}

void insertionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) {

		temp = kevin[i];

		j = i - 1;

		while (j >= 0 && kevin[j] > temp)
		{
			kevin[j + 1] = kevin[j];
			j--;
		}

		kevin[j + 1] = temp;
	}
}

void display() {

	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array Yang Telah Tersusun" << endl;
	cout << "=================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << kevin[j];
		if (j < n < 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	insertionSort();
	display();
	system("pause");

	return 0;

}