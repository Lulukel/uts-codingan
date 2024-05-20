#include<iostream>
using namespace std;

int main(){
	int x = 25; // mendeklarasi variabel x dengan nilai 25
	int *ptr; // mendeklarasi pointer bernama ptr yang dapat menyimpan alamat variabel ke memori
	
	ptr = &x; // menetapkan alamat dari sebuah variabel x ke pointer
	
	cout << "Nilai variabel x adalah: " << x << endl; 
	cout << "Alamat memori variabel x adalah: " << &x << endl;
	cout << "Nilai yang ditunjuk oleh pointer adalah: " << *ptr << endl; 
	
	*ptr = 100; // mengubah nilai x menggunakan pointer
	
	cout << "Nilai x sekarang adalah: " << x << endl; // mencetak nilai x setelah diubah menggunakan pointer
	
	return 0;
}
