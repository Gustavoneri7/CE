#include <iostream>
using namespace std;

void mover_disco(int discos, int estaca_inicial, int estaca_destino, int estaca_temporaria) {
    if (discos == 1) {
        cout << estaca_inicial << " -> " << estaca_destino << endl;
        return;
    }
    
    mover_disco(discos - 1, estaca_inicial, estaca_temporaria, estaca_destino);
    cout << estaca_inicial << " -> " << estaca_destino << endl;
    mover_disco(discos - 1, estaca_temporaria, estaca_destino, estaca_inicial);
}

int main() {
    int discos;
    cout << "Digite o número de discos: ";
    cin >> discos;
    
    cout << "Instruções para mover os discos:" << endl;
    mover_disco(discos, 1, 3, 2);
    
    return 0;
}
