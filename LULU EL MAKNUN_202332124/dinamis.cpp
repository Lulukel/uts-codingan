#include <iostream>
using namespace std;

int main()
{
	int i, deret, jmlDeret;
	cout<<"Masukan Jumlah Deret : ";
	cin>>jmlDeret;
	i=1;
	deret = 0;
	
	while(i<=jmlDeret)
	{
		deret +=i;
		cout<<deret<<"\t";
			i++;
	}
	
	cout<<endl;
	
	return 0;
}
