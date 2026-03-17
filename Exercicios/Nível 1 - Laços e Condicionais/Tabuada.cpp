/*
____________________________________________________________________
 Projeto  : Tabuada
 Exercício: 1.3 — Nível 1 (Laços e Condicionais)
 Autor    : Joa6Pedro
 Data     : 17/03/26
____________________________________________________________________
 Descrição:
   Leia um número e imprima sua tabuada de 1 a 10.
____________________________________________________________________
 Entradas : Um número inteiro
 Saídas   : Tabuada formatada de 1 a 10
____________________________________________________________________
*/

#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "*********************************************************************" << std::endl
              << "                         TABUADA 1 A 10                              " << std::endl;


    float n, resultado;

    std::cout << "\nDigite um número: ";
    std::cin >> n;

    for (int i = 1; i <= 10; i++) {
        resultado = n*i;

        std::cout << n << "x" << i << " = " << resultado << std::endl;

    }

    std::cout << "\n*********************************************************************\n" << std::endl;

    system("Pause");
    return 0;
}