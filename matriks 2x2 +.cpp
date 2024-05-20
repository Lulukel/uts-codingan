#include<iostream>
using namespace std;
int main(){
	int i,j,m,n, matriksA[10][10], matriksB[10][10], hasil[10][10];
cout << "masukan jumlah baris matriks: ";
cin >> m;
cout << "masukan jumlah kolom matriks: ";
cin >> n;

for(int i = 0; i < m ; i++){
	for(int j = 0; j < n ; j++){
		cout >> "Masukan jumlah elemen matriks A: \n ";
		cin >> matriksA[i][j];
	
	}
}

for(int i = 0; i < m ; i++){
	for(int j = 0; j < n ; j++){
		cout << "Masukan jumlah elemen matriks B: \n ";
		cin >> matriksB;
		
	}
}

cout << "Hasil penjumlahan matriks: \n ";
for(int i = 0; i < m ; i++){
	for(int j = 0; j < n ; j++){
		hasil[i][j] = MatriksA[i][j] + MatriksB[i][j];
		cout << hasil[i][j] << "\t";
			}
}
	return 0;
}





 


