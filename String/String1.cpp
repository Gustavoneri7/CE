
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    const char Tam = 15;
    char  nome[Tam];
    char apelido[Tam] = "C++owboy";

    cout << "Olá, eu sou " << apelido << "! Qual o seu nome?" << endl;
    cin >> nome;

    cout << "Bem," << nome << ", seu nome tem " << strlen(nome) << " letras" << endl;
    cout << "e está armazenado em um vetor de " << sizeof(nome) << " bytes" << endl;

    cout << "Sua inicial é " << nome[0] << endl;












    system("PAUSE");
    return 0;
}

