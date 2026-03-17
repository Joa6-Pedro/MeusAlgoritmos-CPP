/*
____________________________________________________________________
 Projeto  : Par ou Ímpar
 Exercício: 1.2 — Nível 1 (Laços e Condicionais)
 Autor    : Joa6Pedro
 Data     : 17/03/26
____________________________________________________________________
 Descrição:
   Leia um inteiro e diga se é par, ímpar ou zero.
____________________________________________________________________
 Entradas : Um número inteiro
 Saídas   : "par", "ímpar" ou "zero"
____________________________________________________________________
*/

#include <iostream>

int main() {

    int n;

    std::cout << "Digite um numero: ";
    std::cin >> n;

    if (n == 0){
        std::cout << "\nO numero e zero.\n" << std::endl;
    }
    else if (n % 2 != 0){
        std::cout << "\nO numero " << n << " e impar.\n" << std::endl;

    }else if (n % 2 == 0){
        std::cout << "\nO numero " << n << " e par\n" << std::endl;

    }else {
        std::cout << "Erro!" << std::endl;
        
    }

    system("Pause");
    return 0;
}