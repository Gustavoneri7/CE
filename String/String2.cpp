
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    const char Tam = 20;
    char nome[Tam];
    char sobremesa[Tam];

    cout << "Seu nome: " << endl;
    cin.getline(nome, Tam);

    cout << "Sua sobremesa favorita: " << endl;
    cin >> sobremesa;

    cout << "Eu tenho um " << sobremesa << " para você " << nome << endl;



    system("PAUSE");
    return 0;

}

