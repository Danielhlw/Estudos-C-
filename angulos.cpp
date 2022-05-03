#include <iostream>
using namespace std;

int main(){
	int ang, rad;

	cout<<"Digite o angulo: \n";
	cin>>ang;
	
	if((ang<0)||(ang>360)){
		cout<<"Angulo invalido";
	}else{
		if(ang==90){
			cout<<"reto\n";
			rad=ang*(3.14/180);
			cout<<"o radiano eh: "<<rad;
		}else{
			if(ang>90){
				cout<<"Obtuso\n";
				rad=ang*(3.14/180);
				cout<<"o radiano eh: "<<rad;
			}else{
				cout<<"agudo\n";
				rad=ang*(3.14/180);
				cout<<"o radiano eh: "<<rad;
			}
		}
	}
	
	return 0;
}