
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	fstream arquivo;
	char opc = 's';
	string nome,linha;

	arquivo.open("arquivo3.txt" ,ios::out);


	while ((opc == 's') or (opc == 'S')) {
		cout << "Digite um nome: ";
		cin >> nome;
		arquivo << nome << "\n";
		cout << "\nDigitar um novo nome?[s/n] ";
		cin >> opc;
		system("CLS");
	}
	arquivo.close();
	arquivo.open("arquivo3.txt", ios::in);

	cout << "Nomes digitados" << endl;

	if (arquivo.is_open()) {
		while (getline(arquivo,linha)) {
			cout << linha << endl;

		}
	}
	else {
		cout << "Não foi possivel abrir o arquivo" << endl;
	}













	
	return 0;
}

