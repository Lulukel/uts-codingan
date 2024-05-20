#include <iostream>
using namespace std;

int main()
{
	cout << "## Program C++ Konversi Detik ke Menit dan Jam ##" << endl;
	cout << "=================================================" << endl;
	cout << endl;
	
	float kilometer, meter;
	
	cout << "Masukan jarak dalam kilometer: ";
	cin >> kilometer;
	cout << endl;
	
	meter = kilometer * 1000;
	cout << kilometer << " km = " << meter << " m" << endl;
	
	
	return 0;
} 
