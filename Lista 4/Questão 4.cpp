#include <iostream>

using namespace std;

int main() {
    
    const double preco_produto1 = 2.98;
    const double preco_produto2 = 4.50;
    const double preco_produto3 = 9.98;
    const double preco_produto4 = 4.49;
    const double preco_produto5 = 6.87;

    int numero_produto;
    int quantidade_vendida;
    double total_venda = 0.0;

    
    while (true) {
       
        cout << "Digite o número do produto (ou 0 para parar): ";
        cin >> numero_produto;

       
        if (numero_produto == 0) {
            break;
        }

        cout << "Digite a quantidade vendida: ";
        cin >> quantidade_vendida;

       
        switch (numero_produto) {
            case 1:
                total_venda += preco_produto1 * quantidade_vendida;
                break;
            case 2:
                total_venda += preco_produto2 * quantidade_vendida;
                break;
            case 3:
                total_venda += preco_produto3 * quantidade_vendida;
                break;
            case 4:
                total_venda += preco_produto4 * quantidade_vendida;
                break;
            case 5:
                total_venda += preco_produto5 * quantidade_vendida;
                break;
            default:
                cout << "Número de produto inválido." << endl;
                break;
        }
    }

  
    cout << "O valor total de varejo de todos os produtos vendidos é: R$ " << total_venda << endl;

    return 0;
}
