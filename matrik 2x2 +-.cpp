#include <iostream>
using namespace std;
int main() {
  int  matriks1[10][10], matriks2[10][10], hasil[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> baris;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> kolom;
  cout << "Masukkan elemen matriks pertama: \n";
  for(i = 0; i < baris; i++){
    for(j = 0; j < kolom; j++){
      cin >> matriks1[i][j];
    }
  }
  cout << "Masukkan elemen matriks kedua: \n";
  for(i = 0; i < kolom; i++){
    for(j = 0; j < baris; j++){
      cin >> matriks2[i][j];
    }
  }
  
  cout << "Hasil pengurangan matriks: \n";
  for(i = 0; i < kolom; i++) {
    for(j = 0; j < baris; j++){
      hasil[i][j] = matriks1[i][j] - matriks2[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }  
  return 0;
}
