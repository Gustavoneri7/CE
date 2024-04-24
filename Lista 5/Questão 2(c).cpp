#include <iostream>
#include <vector>
using namespace std;

bool eh_perfeito(int numero) {
    int soma = 1; 
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            soma += i;
            if (i != numero / i) { 
                soma += numero / i;
            }
        }
    }
    return soma == numero;
}

int main() {
    cout << "Números perfeitos entre 1 e 1000:" << endl;
    for (int i = 1; i <= 1000; ++i) {
        if (eh_perfeito(i)) {
            cout << i << " é um número perfeito." << endl;
            cout << "Fatores de " << i << ": ";
            vector<int> fatores;
            for (int j = 1; j <= i / 2; ++j) {
                if (i % j == 0) {
                    fatores.push_back(j);
                }
            }
            for (int k = 0; k < fatores.size(); ++k) {
                cout << fatores[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
