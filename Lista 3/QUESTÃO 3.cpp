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
        cout << "O número " << orig << " é um palíndromo." << endl;
    } else {
        cout << "O número " << orig << " não é um palíndromo." << endl;
    }

    return 0;
}
