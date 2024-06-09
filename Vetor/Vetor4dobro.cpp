#include <iostream>
using namespace std;

int main()
{

    int n[10];
    double multi{ 0.0 };
    double v;

    cout << "Digite um valor inteiro menor que 50: " << endl;
    cin >> v;

    if (v > 50) {
        cout << "Valor inválido!" << endl;
    }

    cout << "N[0]= " << v << endl;

    for (int i = 1; i < 10; i++) {
        v = v * 2;

        cout << "N[" << i << "]" << "= " << v << endl;
      
    }



    
    
    













    system("PAUSE");
    return 0;
}


