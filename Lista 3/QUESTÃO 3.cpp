#include <iostream>
using namespace std;

int main() 
{

    int num, orig, reverso = 0, dig;

    cin >> num;

    orig = num;
   
    while (num != 0) {
        dig = num % 10;
        reverso = reverso * 10 + dig;
        num /= 10;
    }

   
    if (orig == reverso) {
        cout << "O n�mero " << orig << " � um pal�ndromo." << endl;
    } else {
        cout << "O n�mero " << orig << " n�o � um pal�ndromo." << endl;
    }

    return 0;
}
