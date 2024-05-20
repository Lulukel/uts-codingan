#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    stack<int> s;

    // Menambahkan beberapa bilangan ke dalam stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Mencetak elemen teratas dari stack
    cout << "Elemen teratas: " << s.top() << endl;

    // Menghapus elemen teratas dari stack
    s.pop();

    // Mencetak elemen teratas setelah penghapusan
    cout << "Elemen teratas setelah penghapusan: " << s.top() << endl;

    // Menampilkan semua elemen yang ada dalam stack
    vector<int> v;
    while (!s.empty()) {
        v.push_back(s.top());
        s.pop();
    }
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << "Elemen: " << v[i] << endl;
    }

    return 0;
}
