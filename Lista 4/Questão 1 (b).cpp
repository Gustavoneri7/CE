#include <iostream>
#include <cmath>

using namespace std;

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

double calcular_serie(double x, int termos) {
    double soma = 1.0; 
    double potencia = 1.0; 
    for (int i = 1; i <= termos; i++) {
        potencia *= x;
        soma += potencia / fatorial(i);
    }
    return soma;
}

int main() {
    double x;
    int numero_de_termos = 10;

    cout << "Digite o valor de x: ";
    cin >> x;

    double resultado = calcular_serie(x, numero_de_termos);
    cout << "O resultado da série para x = " << x << " é: " << resultado << endl;

    return 0;
}
