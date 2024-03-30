#include <iostream>

using namespace std;

int main ()
{
	
	int r;
	float pi, a, d;
	
	cout << "Digite o valor do raio:"<< endl;
	cin >> r;
	
	pi = 3,14159;
	a = pi*(r*r);
	d = 2*r;
	
	cout << "Valor da area:"<< a << endl;
	cout << "Valor do diametro da circunferencia:"<< d << endl;
	
	return 0;
	
	
}
