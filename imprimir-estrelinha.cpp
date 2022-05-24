#include <iostream>
using namespace std;

int main(){
	int num,linha,coluna;
	cout<<"Digite um numero inteiro: ";
	cin>>num;
	for(linha=1;linha<=num;linha++){
		for(coluna=1;coluna<=linha;coluna++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	return 0;
}