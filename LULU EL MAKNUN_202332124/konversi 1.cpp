#include <iostream>
using namespace std;

//Konversi Detik ke Menit dan Jam
//Latihan pakai Variabel, Operator dan Tipe data
int main()
{
	cout << "## Program C++ Konversi Detik ke Menit dan Jam ##" << endl;
	cout << "=================================================" << endl;
	cout << endl;
	
	int detik, menit , jam;
	
	cout << "Masukan jumlah detik: ";
	cin >> detik;
	
	menit = detik / 60;
	detik = detik % 60;
	
	jam = menit / 60;
	menit = menit % 60;
	
	cout << "Hasil konversi: " << jam << " jam, " << menit <<  " menit, " << detik << " detik" << endl;
	     
	return 0;
} 
