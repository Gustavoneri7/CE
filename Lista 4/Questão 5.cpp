#include <iostream>

using namespace std;

int main() {
    const int MAX_NUM = 30;
    const int NUM_NUMEROS = 5;
    
    int numeros[NUM_NUMEROS];

    cout << "Digite cinco n�meros entre 1 e 30:" << endl;
    for (int i = 0; i < NUM_NUMEROS; ++i) {
        cout << "N�mero " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] < 1 || numeros[i] > MAX_NUM) {
            cout << "N�mero inv�lido! Por favor, digite um n�mero entre 1 e 30." << endl;
            --i; 
        }
    }

    cout << "\nGr�fico de barras:" << endl;
    for (int i = 0; i < NUM_NUMEROS; ++i) {
        cout << "N�mero " << i + 1 << ": ";
        for (int j = 0; j < numeros[i]; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
