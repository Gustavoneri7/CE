#include <iostream>
#include <cmath> 
using namespace std;

bool eh_primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int limite_superior = 1000;
    cout << "Números primos entre 2 e " << limite_superior << ":" << endl;
    for (int i = 2; i <= limite_superior; ++i) {
        if (eh_primo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
