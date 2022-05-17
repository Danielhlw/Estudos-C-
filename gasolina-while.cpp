#include <iostream>
using namespace std;

int main() {
	int invalido, tc;
	float vg, ct;
	
	cout<<"Digite a capacidade do tanque: "<<endl;
	cin>>ct;
	cout<<"informe o valor gasto: "<<endl;
	cin>>vg;
	
	do{
		cout<<("Opcoes 1 ou 2:\n ");
		cin>>tc;
		invalido=0;
		
		switch (tc){
			case 1:
				cout<<"Gasolina";
				ct=vg*2.30;
				cout<<"O valor da gasolina eh:\n"<<ct<<endl;
				break;
			case 2: 
				cout<<"Alcool";
				ct=vg*1.50;
				cout<<"O valor do alcool eh: "<<ct<<endl;
				break;
			default:
				cout<<"Invalida"<<endl;
				invalido=1
				break;
		}while(invalido);
	}	
    return 0;
}