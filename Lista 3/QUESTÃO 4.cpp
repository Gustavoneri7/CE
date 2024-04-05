#include <iostream>

using namespace std;

int main() 
{
    int binario, decimal = 0, digito, expoente = 0;

   
    cout << "Digite um número binário: ";
    cin >> binario;

    
    while (binario != 0) {
        digito = binario % 10; 
        decimal += digito * (1 << expoente); 
        binario /= 10; 
        expoente++; 
    }

   
    cout << "Valor decimal correspondente: " << decimal << endl;

    return 0;
}
