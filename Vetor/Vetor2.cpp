
#include <iostream>
#include <string>
using namespace std;

int main()
{
    float notas[4];
    float media, soma{ 0.0 };
    string nomeDoAluno;
    
    cout << "Nome do aluno: " << endl;
    cin >> nomeDoAluno;

    for (int i = 0; i < 4; i++) {
        cout << "Digite a sua nota do bimestre " << i+1 << ":" << endl;
        cin >> notas[i];
        soma = soma + notas[i];
    }
    
    media = soma / 4;
    if (media > 5) {
        cout << "Aprovado" << endl;
    }
    else if (media < 5 && media > 4) {
        cout << "Recuperação" << endl;
    }
    else {
        cout << "Reprovado" << endl;
    }

    system("pause");

    return 0;
}

