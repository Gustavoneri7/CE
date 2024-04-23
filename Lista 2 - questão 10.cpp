#include <iostream>
#include <string>
#include <unordered_map>


std::unordered_map<char, int> contar_vogais(const std::string& str) {
    std::unordered_map<char, int> contagem;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contagem[c]++;
        }
    }
    return contagem;
}


std::string criptografar(const std::string& str) {
    std::string criptografada;
    for (char c : str) {
        switch (c) {
            case 'a':
                criptografada += 'i';
                break;
            case 'e':
                criptografada += 'o';
                break;
            case 'i':
                criptografada += 'u';
                break;
            default:
                criptografada += c;
        }
    }
    return criptografada;
}

int main() {
    std::string entrada;
    std::cout << "Digite uma string com 5 caracteres: ";
    std::cin >> entrada;

    if (entrada.length() != 5) {
        std::cout << "A string deve conter exatamente 5 caracteres." << std::endl;
        return 1;
    }

    
    std::unordered_map<char, int> contagem_vogais = contar_vogais(entrada);
    std::cout << "Quantidade de cada vogal na string:" << std::endl;
    for (const auto& par : contagem_vogais) {
        std::cout << par.first << ": " << par.second << std::endl;
    }

   
    std::string criptografada = criptografar(entrada);
    std::cout << "Nova string criptografada: " << criptografada << std::endl;

    return 0;
}
