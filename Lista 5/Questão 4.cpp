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
        cout << "Eu tenho um n�mero entre 1 e 1000." << endl;
        cout << "Voc� consegue adivinhar o meu n�mero?" << endl;

        
        do {
            cout << "Digite seu palpite: ";
            cin >> palpite;

            if (palpite == numero_secreto) {
                cout << "Excelente! Voc� adivinhou o n�mero!" << endl;
            } else if (palpite < numero_secreto) {
                cout << "Muito baixo. Tente novamente." << endl;
            } else {
                cout << "Muito alto. Tente novamente." << endl;
            }
        } while (palpite != numero_secreto);

        // Perguntar se o jogador deseja jogar novamente
        cout << "Voc� gostaria de jogar novamente (s ou n)? ";
        cin >> jogar_novamente;
    } while (jogar_novamente == 's');

    return 0;
}
