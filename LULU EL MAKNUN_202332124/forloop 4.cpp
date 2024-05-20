#include <iostream>
using namespace std;

int main(){
	int i = 0;
	
	do{
		i++;
		if(i==5){
			break;
		}
		
		cout<<i<<" + "<<i<<" = "<<(i+i)<<endl;
	}while(i<=10);
	
}
