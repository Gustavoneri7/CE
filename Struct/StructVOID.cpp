
#include <iostream>
using namespace std;

struct carro {
    string cor;
    string modelo;
    float pot;
    float valor;
    string nome;

    void insere(string stnome, string stcor, float stpot, float stvalor) {
        nome = stnome;
        cor = stcor;
        pot = stpot;
        valor = stvalor;
    } 
    void mostra() {
        cout << "NOME -----------"<<  nome << endl;
        cout << "COR ------------"<< cor << endl;
        cout << "POTENCIA ------------" << pot << endl;
        cout << "VALOR -------------" << valor << endl;
    }

};
int main(){

    carro* carros = new carro[3];
    carro car1, car2, car3;
    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    
    carros[0].insere ("Corsa", "Preto", 75, 12000);
    carros[1].insere ("Santana", "Prata", 80, 10000);
    carros[2].insere ("Palio", "Branco", 65, 15000);
   
    for (int i = 0; i < 3; i++) {
        carros[i].mostra();
    }
    








    system("PAUSE");
    return 0;
}


