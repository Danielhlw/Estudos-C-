#include <iostream>
using namespace std;

int main(){
	int a,b,i=1,total=0;
	cout<<"Digite A: ";
	cin>>a;
	cout<<"Digite B: ";
	cin>>b;
	
	while(i<=a){
		total=total+b;
		i=i+1;
	}
	cout<<a<<" x "<<b<<" = "<<total<<endl;
	return 0;
}