/*
____________________________________________________________________
 Projeto  : Palíndromo
 Exercício: 2.1 — Nível 2 (Funções e Arrays)
 Autor    : Joa6Pedro
 Data     : 17/03/26
____________________________________________________________________
 Descrição:
   Leia uma palavra e verifique se ela é igual ao seu reverso.
   A lógica de verificação está em função separada.
____________________________________________________________________
 Entradas : Uma palavra (string)
 Saídas   : "é um palíndromo" ou "não é um palíndromo"
____________________________________________________________________
*/

#include <iostream>
#include <windows.h>
#include <string>
#include <cctype>

std::string formataPalavra(std::string);
bool verificaPalindromo(std::string);

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string palavra;

    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;

    palavra = formataPalavra(palavra);
    std::cout << palavra << "\n" << std::endl;

    bool palindromo = verificaPalindromo(palavra);

    std::cout << "\nA palavra " << palavra << (palindromo? " é um palíndromo.": " não é um palíndromo.") 
    << "\n" << std::endl;

    system("Pause");
    return 0;
}


std::string formataPalavra(std::string palavra) {

    for (int i = 0; i < palavra.length(); i++){
        palavra[i] = tolower(palavra[i]);
    }

    return palavra;
}


bool verificaPalindromo (std::string palavra) {
    
    bool palindromo = true;
    int j = palavra.length() - 1;

    for (int i = 0; i < palavra.length() / 2; i++) {

        if (palavra[j] != palavra[i]) {
            palindromo = false;
            break;
        }

        j--;
    }

    return palindromo;
}