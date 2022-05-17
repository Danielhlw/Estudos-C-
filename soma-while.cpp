// programa para definir a soma dos numeros positivos
// se o usuario entrar com um valor negativo, o codigo para
// o numero negativo nao e adicionado a soma

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int sum = 0;

    do {
        sum = sum + number;
        
        // pegar a entrada do usuario 
        cout << "Enter a number: ";
        cin >> number;
    }
    while (number >= 0);
    
    // mostre a soma
    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}