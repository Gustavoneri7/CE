#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int contarCaractere(const string& linha, char caractere) {
    int contagem = 0;
    for (char c : linha) {
        if (c == caractere) {
            contagem++;
        }
    }
    return contagem;
}

int main() {
    string arquivoEntrada = "mochileiro.txt";
    char caractereBusca;

    ifstream arquivo(arquivoEntrada);
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo " << arquivoEntrada << endl;
        cerr << "Certifique-se de que o arquivo existe e que você tem permissão para acessá-lo." << endl;
        return 1;
    }

    cout << "Digite o caractere que deseja contar: ";
    cin >> caractereBusca;

    string linha;
    while (getline(arquivo, linha)) {
        int quantidade = contarCaractere(linha, caractereBusca);
        cout << "Na linha: \"" << linha << "\"" << endl;
        cout << "O caractere '" << caractereBusca << "' ocorre " << quantidade << " vezes." << endl;
    }

    arquivo.close();

    return 0;
}
