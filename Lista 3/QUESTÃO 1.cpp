#include <iostream>

using namespace std;

int main()
{
	int km, l, kml;
	
	cout <<"Digite a quantidade de quiômetros percorridos:"<< endl;
	cin >> km;
	
	cout <<"Digite a quantidade de litros"<< endl;
	cin >> l;
	
	kml = km/l;
	
	cout <<"Consumo:"<< kml << "km/l"<< endl;
	
	return 0;
}
