#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() {
 
    srand(time(0)); 

    int numero_pensado;
    int palpite;
    int tentativas = 0;

    cout << "Pense em um número entre 1 e 100." << endl;

    numero_pensado = rand() % 100 + 1;

    while (tentativas < 7) {
        cout << "O número em que você está pensando é menor que " << numero_pensado << "? (s/n): ";
        char resposta;
        cin >> resposta;

        if (resposta == 's') {
            numero_pensado = rand() % numero_pensado;
        }
        else if (resposta == 'n') {
            numero_pensado = rand() % (100 - numero_pensado) + numero_pensado + 1;
        }
        else {
            cout << "Resposta inválida. Por favor, digite 's' para sim ou 'n' para não." << endl;
            continue; 
        }

       
        tentativas++;

      
        if (resposta == 's') {
            cout << "O número que você pensou é: " << numero_pensado << endl;
            cout << "Número de tentativas: " << tentativas << endl;
            break;
        }
    }

  
    if (tentativas == 7) {
        cout << "Desculpe, não consegui adivinhar o número em 7 perguntas." << endl;
        cout << "Você pode ter pensado em um número diferente ou fornecido respostas inconsistentes." << endl;
    }

    return 0;
}
