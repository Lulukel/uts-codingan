#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "## Program C++ Menghitung Keliling Segitiga ##" << endl;
	cout << "==============================================" << endl;
	cout << endl;
	
	float alas, tinggi, sisi, keliling;
	
	cout << "Input alas segitiga: ";
	cin >> alas;
	cout << endl;
	
	cout << "Input tinggi segitiga: ";
	cin >> tinggi;
	cout << endl;
	
	sisi = sqrt (alas*alas)+(tinggi*tinggi);
	keliling = alas + tinggi + sisi;
	cout << "panjang sisi miring adalah: " << sisi << endl;
	cout << "keliling segitiga adalah: " << keliling << endl;
	
	return 0;
} 
