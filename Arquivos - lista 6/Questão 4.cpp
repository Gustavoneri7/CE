#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>

using namespace std;

const string PASTA_ARQUIVOS = "diario_de_classe/";

void cadastrarAluno() {
    string nomeAluno;
    string matricula;
    
    cout << "Digite o nome do aluno: ";
    cin >> nomeAluno;
    cout << "Digite a matricula do aluno: ";
    cin >> matricula;

    ifstream arquivo(PASTA_ARQUIVOS + nomeAluno + ".txt");
    if (arquivo.is_open()) {
        cout << "Aluno já cadastrado." << endl;
        arquivo.close();
        return;
    }

    ofstream novoArquivo(PASTA_ARQUIVOS + nomeAluno + ".txt");
    if (novoArquivo.is_open()) {
        novoArquivo << matricula << endl;
        cout << "Aluno cadastrado com sucesso." << endl;
        novoArquivo.close();
    } else {
        cerr << "Erro ao criar o arquivo do aluno." << endl;
    }
}

void adicionarNota() {
    string nomeAluno;
    double nota;

    cout << "Digite o nome do aluno: ";
    cin >> nomeAluno;

    ifstream arquivo(PASTA_ARQUIVOS + nomeAluno + ".txt");
    if (!arquivo.is_open()) {
        cout << "Aluno não encontrado." << endl;
        arquivo.close();
        return;
    }

    arquivo.close();

    cout << "Digite a nota do aluno: ";
    cin >> nota;

    ofstream arquivoNotas(PASTA_ARQUIVOS + nomeAluno + ".txt", ios::app);
    if (arquivoNotas.is_open()) {
        arquivoNotas << nota << endl;
        cout << "Nota adicionada com sucesso." << endl;
        arquivoNotas.close();
    } else {
        cerr << "Erro ao abrir o arquivo do aluno." << endl;
    }
}

void calcularMedia() {
    string nomeAluno;
    double somaNotas = 0.0;
    int numNotas = 0;

    cout << "Digite o nome do aluno: ";
    cin >> nomeAluno;

    ifstream arquivo(PASTA_ARQUIVOS + nomeAluno + ".txt");
    if (!arquivo.is_open()) {
        cout << "Aluno não encontrado." << endl;
        arquivo.close();
        return;
    }

    string matricula;
    getline(arquivo, matricula);

    double nota;
    while (arquivo >> nota) {
        somaNotas += nota;
        numNotas++;
    }
    arquivo.close();

    if (numNotas > 0) {
        double media = somaNotas / numNotas;
        cout << "Matrícula: " << matricula << endl;
        cout << "Média de notas: " << media << endl;
    } else {
        cout << "O aluno não possui notas cadastradas." << endl;
    }
}

int exibirMenu() {
    int escolha;
    
    cout << endl;
    cout << "Menu:" << endl;
    cout << "1. Cadastrar aluno" << endl;
    cout << "2. Adicionar nota de um aluno" << endl;
    cout << "3. Calcular média de um aluno" << endl;
    cout << "4. Fechar o programa" << endl;
    cout << "Escolha uma opção: ";
    cin >> escolha;

    return escolha;
}

int main() {
    while (true) {
        int opcao = exibirMenu();

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
                adicionarNota();
                break;
            case 3:
                calcularMedia();
                break;
            case 4:
                cout << "Fechando o programa..." << endl;
                return 0;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    }

    return 0;
}

