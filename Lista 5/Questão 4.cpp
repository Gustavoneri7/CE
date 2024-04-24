#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() {
    
    srand(time(0));

    char jogar_novamente;
    do {
        
        int numero_secreto = rand() % 1000 + 1;
        int palpite;
        cout << "Eu tenho um número entre 1 e 1000." << endl;
        cout << "Você consegue adivinhar o meu número?" << endl;

        
        do {
            cout << "Digite seu palpite: ";
            cin >> palpite;

            if (palpite == numero_secreto) {
                cout << "Excelente! Você adivinhou o número!" << endl;
            } else if (palpite < numero_secreto) {
                cout << "Muito baixo. Tente novamente." << endl;
            } else {
                cout << "Muito alto. Tente novamente." << endl;
            }
        } while (palpite != numero_secreto);

        // Perguntar se o jogador deseja jogar novamente
        cout << "Você gostaria de jogar novamente (s ou n)? ";
        cin >> jogar_novamente;
    } while (jogar_novamente == 's');

    return 0;
}
