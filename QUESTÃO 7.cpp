#include <iostream>

using namespace std;

void verificaPrimo(int num) {
    if (num <= 1) 
	{
        cout << num << " n�o � um n�mero primo." << endl;
        return;
    }
    bool primo = true;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            primo = false;
            break;
        }
    }
    if (primo) 
	{
        cout << num << " � um n�mero primo." << endl;
    } else {
        cout << num << " n�o � um n�mero primo." << endl;
    }
}

int main() 
{
    int num;

    
    cout << "Digite um n�mero inteiro: ";
    cin >> num;


    verificaPrimo(num);

    return 0;
    
}
