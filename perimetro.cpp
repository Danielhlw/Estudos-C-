#include<iostream>

using namespace std;

int main(){
	float a,b,perimetro,area;
	
	cout << "digite a: ";
	cin >> a;
	cout << "digite b: ";
	cin >> b;
	perimetro = a + a + b + b;
	area = a * b;
	
	cout << " o perimetro eh: " << perimetro << endl;
	cout << "a area eh: " << area;
    return 0;
}