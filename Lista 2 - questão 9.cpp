#include <iostream>

using namespace std;

int main() 
{
	
    double d,ct,cm;
    
    cout << "Digite a distância percorrida: "<< endl;
    cin >> d;

    
    if (d <= 50) {
        ct = d * 1.75;
    } else if (d <= 100) {
        ct = 50 * 1.75 + (d - 50) * 1.65;
    } else {
        ct = 50 * 1.75 + 50 * 1.65 + (d - 100) * 1.50;
    }

    cm = ct / d;
   
    cout << "Valor total a pagar: R$" << ct << endl;
    cout << "Custo médio por km: R$" << cm << endl;

    return 0;
}
