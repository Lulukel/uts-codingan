#include <iostream>
using namespace std;

int main ()
{
float a,b,c,d,e,f,M,D;

cout << "masukkan nilai M ="; cin>>M;
cout << "masukkan nilai D ="; cin>>D;

a = M>D;
b = M<D;
c = M>=D;
d = M<=D;
e = M==D;
f = M!=D;

cout<<"\nhasil dari"<< M <<" < " << D << " ="	<<a;
cout<<"\nhasil dari"<< M <<" > " << D << " ="	<<b;
cout<<"\nhasil dari"<< M <<" <= " << D << " ="	<<c;
cout<<"\nhasil dari"<< M <<" >= " << D << " ="	<<d;
cout<<"\nhasil dari"<< M <<" ==" << D << " ="	<<e;
cout<<"\nhasil dari"<< M <<" != " << D << " ="	<<f;

return 0;
}
