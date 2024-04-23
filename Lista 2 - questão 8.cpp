#include <iostream>
#include <math.h>

using namespace std;


int main() 
{
	
 double h,ca,co, p;
 
 cout <<"Digite o valor do cateto oposto: "<< endl;
 cin >> co;
 
 cout <<"Digite o valor do cateto adjacente: "<< endl;
 cin >> ca;
 
 h= sqrt(co*co + ca*ca);
 
 cout <<"O valor da hipotenusa é: "<< h << endl;
 
 return 0;	
}
