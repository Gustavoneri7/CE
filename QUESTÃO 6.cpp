#include <iostream>

using namespace std;

int main()
{
  int num1, num2, resto, div;
  
  cout << "Digite o primeiro n�mero: " << endl;
  cin >> num1;
  
  cout << "Digite o segundo n�mero: "<< endl;
  cin >> num2;
  
  div = num1/num2;
  resto = num1%num2;
  
  if(resto !=0){
  	 cout <<"N�o s�o m�ltiplos"<< endl;
  	  } else {
  	  	cout <<"S�o m�ltiplos"<< endl;
		}
 	
 return 0;

}
}
