

#include <iostream>
using namespace std;

int main()
{
    int array[20];
    int numeroDeElementos;
    int max, min;

    cout << "Digite a quantidade de elementos que deseja: " << endl;
    cin >> numeroDeElementos;

    for (int i = 0; i < numeroDeElementos; i++){
        cout << "Digite o elemento " << i + 1 << ": " << endl;
    cin >> array[i];
}
    min = array[0];
    max = array[0];

    for (int i = 0; i < numeroDeElementos; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        else if (array[i] < min) {
            min = array[i];
            }
    }

    cout << "O maior valor digitado foi: " << max <<  endl;
    cout << "O menor valor digitado foi: " << min << endl;
    

    system("PAUSE");

    return 0;
}

