#include <iostream>
using namespace std;

int main()
{
	bool a = true;
	bool b = false;
	bool hasil;
	
	hasil= a && a;
	cout << "hasil dari a && a:" << hasil << endl;
	
	hasil = a && b ;
	cout << "hasil dari a && b:" << hasil << endl;
	
	hasil = a || b;
	cout << "hasil dari a || b:" << hasil << endl;
	
	hasil = b || b;
	cout << "hasil dari b || b:" << hasil << endl;
	
	hasil = !a;
	cout << "hasil dari !a:" << hasil << endl;
	
	hasil = !b;
	cout << "hasil dari !b:" << hasil << endl;
	
	return 0;

}
