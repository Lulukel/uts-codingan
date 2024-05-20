#include<iostream>
using namespace std;
int main() {
	int mantriks1[2][2], matriks2[2][2], hasil [2][2];
	
	cout << "Masukan elemen matriks pertama: " << endl;
	for (int i = 0; i < 2; ++i){
		for (int j = 0; j < 2; ++j){
		cin >> matriks1[i][j];
		}
	}
	
	cout << "Masukan elemen matriks kedua: " << endl;
	for (int i = 0; i < 2; ++i){
		for (int j = 0; j < 2; ++j){
			cin >> matriks2[i][j];
		}
	}
	
	cout << "Hasil pengurangan matriks: " << endl;
	for (int i = 0; i < 2; ++i){
		for (int j = 0; j < 2; ++j){
			hasil[i][j] = matriks1[i][j] - matriks2[i][j];
			cout << hasil[i][j] << "\t";
		}
		
		cout << endl;
		
	return 0;
}
