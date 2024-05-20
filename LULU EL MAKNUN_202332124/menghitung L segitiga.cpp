#include <iostream>
using namespace std;

int main()
{
	cout << "## Program C++ Menghitung Luas Segitiga ##" << endl;
	cout << "==========================================" << endl;
	cout << endl;
	
	float alas, tinggi, luas;
	
	cout << "Masukan nilai alas: ";
	cin >> alas;
	cout << endl;
	
	cout << "Masukan nilai tinggi: ";
	cin >> tinggi;
	cout << endl;
	
	luas = 0.5 * alas * tinggi;
	cout << "Luas segitiga adalah: " << luas << endl;
	
	
	return 0;
} 
