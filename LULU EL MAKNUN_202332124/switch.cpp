#include <iostream>
using namespace std;

int main()
{
	int tv;
	
	cout<<"DAFTAR CHANNEL TV"<<endl;
	cout<<"1. RCTI"<<endl;
	cout<<"2. ANTV"<<endl;
	cout<<"3. SPACE TOON"<<endl;
	cout<<"================================================================"<<endl;
	
	cout<<"Masukkan channel pilihan  =";
	cin >>tv;
	
	switch(tv){
		case 1 : cout <<"RCTI TERPILIH";break;
		case 2 : cout <<"ysh gitulah";break;
		case 3 : cout <<"laperrrrrrr";break;
		
		default : cout <<"channel rusak";
	}
	
	return 0;
}
