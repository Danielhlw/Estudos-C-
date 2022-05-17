#include <iostream>
using namespace std;

int main() {
	int num,i;
	cout<<"informe um numero inteiro: ";
	cin>>num;
	for(i=1;i<=10;i++){
		cout<<num<< " x " <<i<< " = " <<num*i<<endl;
	}
	
    return 0;
}