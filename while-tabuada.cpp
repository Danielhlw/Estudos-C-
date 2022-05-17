#include <iostream>
using namespace std;

int main() {
	int num,i=1;
	cout<<"informe um numero inteiro: ";
	cin>>num;
	
	while(i<=10){
		cout<<num<<" x "<< " = "<<num*i<<endl;
		i++;
	}
	
    return 0;
}