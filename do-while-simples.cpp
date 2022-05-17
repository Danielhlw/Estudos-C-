#include <iostream>
using namespace std;

int main() {
	int num,i=1;
	cout<<"informe um numero inteiro: ";
	cin>>num;
	
	do{
		cout<<num<<" x "<<" = "<<num*i<<endl;
	}while(i<=10);
		
    return 0;
}