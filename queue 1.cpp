#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> antrian; // Membuat antrian dengan tipe data integer

    // Menambahkan elemen ke antrian
    antrian.push(10);
    antrian.push(20);
    antrian.push(30);

    // Mengakses elemen pertama (front) dari antrian
    cout << "Elemen pertama: " << antrian.front() << endl;

    // Menghapus elemen pertama dari antrian
    antrian.pop();

    // Mengakses elemen pertama setelah penghapusan
    cout << "Elemen pertama setelah penghapusan: " << antrian.front() << endl;

    // Menghitung jumlah elemen dalam antrian
    cout << "Jumlah elemen dalam antrian: " << antrian.size() << endl;

    return 0;
}
