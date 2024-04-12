#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() {
 
    srand(time(0)); 

    int numero_pensado;
    int palpite;
    int tentativas = 0;

    cout << "Pense em um n�mero entre 1 e 100." << endl;

    numero_pensado = rand() % 100 + 1;

    while (tentativas < 7) {
        cout << "O n�mero em que voc� est� pensando � menor que " << numero_pensado << "? (s/n): ";
        char resposta;
        cin >> resposta;

        if (resposta == 's') {
            numero_pensado = rand() % numero_pensado;
        }
        else if (resposta == 'n') {
            numero_pensado = rand() % (100 - numero_pensado) + numero_pensado + 1;
        }
        else {
            cout << "Resposta inv�lida. Por favor, digite 's' para sim ou 'n' para n�o." << endl;
            continue; 
        }

       
        tentativas++;

      
        if (resposta == 's') {
            cout << "O n�mero que voc� pensou �: " << numero_pensado << endl;
            cout << "N�mero de tentativas: " << tentativas << endl;
            break;
        }
    }

  
    if (tentativas == 7) {
        cout << "Desculpe, n�o consegui adivinhar o n�mero em 7 perguntas." << endl;
        cout << "Voc� pode ter pensado em um n�mero diferente ou fornecido respostas inconsistentes." << endl;
    }

    return 0;
}
