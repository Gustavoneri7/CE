
#include <iostream>
using namespace std;

struct carro {
    int ano;
    string cor;
    string modelo;
    int pot;
    int valor;
    string nome;
};
int main(){

    carro car1;
    carro car2;
    car1.ano = 2007;
    car1.nome = "Punto";
    car1.cor = "Azul";
    car1.pot = 80;
    car1.valor = 28000;

    car2.ano = 2015;
    car2.nome = "UP";
    car2.cor = "Azul";
    car2.pot = 120;
    car2.valor = 35000;


    cout << car1.ano << endl;
    cout << car1.nome << endl;
    cout << car1.cor << endl;
    cout << car1.pot << endl;
    cout << car1.valor << endl;
    cout << "                         " << endl;
    cout << car2.ano << endl;
    cout << car2.nome << endl;
    cout << car2.cor << endl;
    cout << car2.pot << endl;
    cout << car2.valor << endl;







    system("PAUSE");
    return 0;
}


