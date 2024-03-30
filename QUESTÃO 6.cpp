#include <iostream>

using namespace std;

int main()
{
  int num1, num2, resto, div;
  
  cout << "Digite o primeiro número: " << endl;
  cin >> num1;
  
  cout << "Digite o segundo número: "<< endl;
  cin >> num2;
  
  div = num1/num2;
  resto = num1%num2;
  
  if(resto !=0){
  	 cout <<"Não são múltiplos"<< endl;
  	  } else {
  	  	cout <<"São múltiplos"<< endl;
		}
 	
 return 0;

}
}
