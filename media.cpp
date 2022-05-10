#include <iostream>
using namespace std;

int main(){
	//o n=-5 serve apenas para ele entrar no laco, depois ele pode ser alterado.
	float n=-5,cont=0,soma=0,med;
	
	while(n!=0){
		cout<<"Digite o N: ";
		cin>>n;
		soma=soma+n;
		cont=cont+1;
	}
	cont=cont-1;
	med=soma/cont;
	cout<<"SOMA: "<<soma<<endl;
	cout<<"QUANTIDADE: "<<cont<<endl;
	cout<<"MEDIA: "<<med<<endl;
	
	return 0;
}