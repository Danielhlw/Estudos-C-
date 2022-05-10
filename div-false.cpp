#include <iostream>
using namespace std;

int main(){
	int a,aa,b,total=0;
	cout<<"Digite A: ";
	cin>>a;
	cout<<"Digite B: ";
	cin>>b;
	aa=a;
	while(aa>=b){
		aa=aa-b;
		total=total+1;
	}
	cout<<a<<" / "<<b<<" = "<<total<<"resto="<<a<<endl;
	return 0;
}