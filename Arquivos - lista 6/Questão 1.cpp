#include <iostream>
#include <fstream>
using namespace std;

int main (){
	int numero;
	int TAM;
	int num=TAM;
	int soma;
	int i;
	int vetor[TAM];
	int ptr;	
    
    cout << "Quantos numeros deseja realizar essa operação?"<< endl;
    cin >> num;
	

    for (i = 0; i < num ; i++) {
        cin >> vetor[i];
        ptr = vetor[i];
        soma = soma + ptr;
    }
	
	cout << soma << endl;
	
	
	ofstream arquivo;
	arquivo.open("vetor.txt", ios::app);
	arquivo << vetor[i]; 
	arquivo.close();
	
	ofstream arquivo2;
	arquivo2.open("soma.txt");
	arquivo2 << soma;
	arquivo2.close();
	
	return 0;
}