#include <iostream>
using namespace std;

int main()
{
int a=181;
int b=108;
int hasil;

hasil = a&b;
cout << "hasil dari a & b:" << hasil << endl;

hasil = a | b;
cout << "hasil dari a | b:" << hasil << endl;

hasil = a ^ b;
cout << "hasil dari a ^ b :" << hasil << endl;

hasil =  a>>1;
cout << "hasil dari a >>1 :" << hasil << endl;

hasil = b<<2;
cout << "hasil dari b<<2 :"<< hasil << endl;

return 0;
}
