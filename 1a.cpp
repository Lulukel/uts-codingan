#include <iostream>
using namespace std;

int main() {
    int matriks1[2][2], matriks2[2][2], hasil[2][2];

    // Input elemen matriks pertama
    cout << "Masukkan elemen matriks pertama: \n";
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            cin >> matriks1[i][j];
        }
    }

    // Input elemen matriks kedua
    cout << "Masukkan elemen matriks kedua: \n";
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            cin >> matriks2[i][j];
        }
    }

    // Penjumlahan kedua matriks
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }

    // Tampilkan hasil penjumlahan matriks
    cout << "\nHasil penjumlahan matriks: \n";
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            cout << hasil[i][j] << " ";
            if(j == 1)
                cout << endl;
        }
    }

    return 0;
}
