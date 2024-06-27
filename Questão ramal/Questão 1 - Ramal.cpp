#include <iostream>
#include <string>

using namespace std;


struct ramal {
	int NumeroDoRamal;
	int Categoria;
	string Setor;
	int Edificio;
	int Sala;
	string ResponsavelRamal;
	string ResponsavelAteste;
};

int main() {

	struct ramal ramais;

	
		
		cout << "Ramal: " << endl;
		cin >> ramais.NumeroDoRamal;
		cout << "Categoria: " << endl;
		cin >> ramais.Categoria;
		cout << "Setor: " << endl;
		cin >> ramais.Setor;
		cout << "Edifício: " << endl;
		cin >> ramais.Edificio;
		cout << "Sala: " << endl;
		cin >> ramais.Sala;
		cout << "Responsável pelo ramal: " << endl;
		cin >> ramais.ResponsavelRamal;
		cout << "Responsável pelo ateste: " << endl;
		cin >> ramais.ResponsavelAteste;

	


	for (int i = 0; i < 1; i++) {
		cout << "------------- INFORMAÇÕES GERAL DO RAMAL ---------------" << endl;
		cout << "Ramal: " << ramais.NumeroDoRamal << endl;
		cout << "Categoria: " << ramais.Categoria << endl;
		cout << "Setor: " << ramais.Setor << endl;
		cout << "Edifício: " << ramais.Edificio << endl;
		cout << "Responsável pelo ramal: " << ramais.ResponsavelRamal << endl;
		cout << "Responsável pelo ateste: " << ramais.ResponsavelAteste << endl;
	}












	system("PAUSE");
	return 0;
}