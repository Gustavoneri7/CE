#include <iostream>

using namespace std;

int main ()
{
	int num1, num2, soma, sub, multi, quoc;
	
	cout << "Digite o primeiro numero: " << endl;
	cin >> num1;
	
	cout << "Digite o segundo numero:" << endl;
	cin >> num2;
	
	soma = num1 + num2;
	sub = num1 - num2;
	multi = num1*num2;
	quoc = num1/num2;
	
	cout << "Soma: "<< soma << endl;
	cout << "Produto: " << multi << endl;
	cout << "Diferenca:" << sub << endl;
	cout << "Quociente:" << quoc << endl;
	

	return 0;
}
