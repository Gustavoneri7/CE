#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <string>

using namespace std;

void lerDados(const string& arquivoAltura, const string& arquivoPeso, unordered_map<string, double>& alturas, unordered_map<string, double>& pesos) {
    ifstream arquivoA(arquivoAltura);
    ifstream arquivoP(arquivoPeso);

    if (!arquivoA.is_open() || !arquivoP.is_open()) {
        cerr << "Erro ao abrir um dos arquivos." << endl;
        return;
    }

    string codigo;
    double medida;

    while (getline(arquivoA, codigo) && arquivoP >> medida) {
        alturas[codigo] = medida;
        getline(arquivoP, codigo);
    }

    arquivoA.close();
    arquivoP.close();
}

void encontrarMaiorAltura(const unordered_map<string, double>& alturas) {
    double maiorAltura = -1.0;
    string pessoaMaiorAltura;

    for (const auto& par : alturas) {
        if (par.second > maiorAltura) {
            maiorAltura = par.second;
            pessoaMaiorAltura = par.first;
        }
    }

    cout << "Pessoa com maior altura: " << pessoaMaiorAltura << " (" << maiorAltura << " metros)" << endl;
}

void encontrarMaiorPeso(const unordered_map<string, double>& pesos) {
    double maiorPeso = -1.0;
    string pessoaMaiorPeso;

    for (const auto& par : pesos) {
        if (par.second > maiorPeso) {
            maiorPeso = par.second;
            pessoaMaiorPeso = par.first;
        }
    }

    cout << "Pessoa com maior peso: " << pessoaMaiorPeso << " (" << maiorPeso << " quilogramas)" << endl;
}

int main() {
    string arquivoAltura = "altura.txt";
    string arquivoPeso = "peso.txt";

    unordered_map<string, double> alturas;
    unordered_map<string, double> pesos;

    lerDados(arquivoAltura, arquivoPeso, alturas, pesos);

    encontrarMaiorAltura(alturas);

    encontrarMaiorPeso(pesos);

    return 0;
}
