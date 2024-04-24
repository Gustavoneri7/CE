#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

void gerar_pergunta(int &num1, int &num2) {
  
    num1 = rand() % 9 + 1; 
    num2 = rand() % 9 + 1; 
}

int main() {
    srand(time(0)); 
    
    int num1, num2, resposta, resultado;
    bool acertou;
    
    while (true) {
        gerar_pergunta(num1, num2);
        resultado = num1 * num2;
        
        cout << "Quanto é " << num1 << " vezes " << num2 << "? ";
        cin >> resposta;
        
        if (resposta == resultado) {
            cout << "Muito bom!" << endl;
            acertou = true;
        } else {
            cout << "Não. Por favor, tente novamente." << endl;
            acertou = false;
        }
        
       
        while (!acertou) {
            cout << "Quanto é " << num1 << " vezes " << num2 << "? ";
            cin >> resposta;
            if (resposta == resultado) {
                cout << "Muito bom!" << endl;
                acertou = true;
            } else {
                cout << "Não. Por favor, tente novamente." << endl;
            }
        }
    }
    
    return 0;
}
