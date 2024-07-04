
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream arquivo;

    arquivo.open("arquivo.txt", ios::app);
    arquivo << "Gustavo Neri Alves Almeida\n";
    arquivo.close();















    system("PAUSE");
    return 0;
}

