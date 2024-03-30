#include <iostream>

using namespace std;

void verificaPrimo(int num) {
    if (num <= 1) 
	{
        cout << num << " não é um número primo." << endl;
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
        cout << num << " é um número primo." << endl;
    } else {
        cout << num << " não é um número primo." << endl;
    }
}

int main() 
{
    int num;

    
    cout << "Digite um número inteiro: ";
    cin >> num;


    verificaPrimo(num);

    return 0;
    
}
