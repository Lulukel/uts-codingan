#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    // Menambahkan elemen ke dalam stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Mencetak elemen teratas dari stack
    cout << "Elemen teratas: " << s.top() << endl;

    // Menghapus elemen teratas dari stack
    s.pop();

    // Mencetak elemen teratas setelah penghapusan
    cout << "Elemen teratas setelah penghapusan: " << s.top() << endl;

    // Mencetak jumlah elemen dalam stack
    cout << "Jumlah elemen dalam stack: " << s.size() << endl;

    return 0;
}
