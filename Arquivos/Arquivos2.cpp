
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //ofstream, ifstream, fstream
   /* ofstream arquivoS;

    arquivoS.open("arquivo.txt", ios::app);
    arquivoS << "Gustavo Neri Alves Almeida\n";
    arquivoS.close();
*/
    //Arquivo de entrada
    ifstream arquivoE;
    string linha;
    arquivoE.open("arquivo.txt");
        if (arquivoE.is_open()) {
            while (getline.cin(arquivoE, linha)) {
                cout << linha << endl;
            }
        }
        else {
            cout << "Não foi possível abrir o arquivo" << endl;
        }













    system("PAUSE");
    return 0;
}

