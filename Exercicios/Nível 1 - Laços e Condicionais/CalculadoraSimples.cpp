/*
____________________________________________________________________
 Projeto  : Calculadora Simples
 Exercício: 1.1 — Nível 1 (Laços e Condicionais)
 Autor    : Joa6Pedro
 Data     : 17/03/26
____________________________________________________________________
 Descrição:
   Leia dois números e uma operação (+, -, *, /) e exiba o resultado.
____________________________________________________________________
 Entradas : Operação (char), dois números (float)
 Saídas   : Resultado da operação
____________________________________________________________________
*/

#include <iostream>

int main() {

    float n1,n2, resultado;
    char opc;

    std::cout << "Digite a operacao a ser realizada: ";
    std::cin >> opc;

    std::cout << "Digite dois valores separados por um espaco: ";
    std::cin >> n1;
    std::cin >> n2;

    switch (opc) {
        case '+': 
            resultado = n1 + n2; 
            break;
        case '-': 
            resultado = n1 - n2;
            break;
        case '*':
            resultado = n1 * n2;
            break;
        case '/':
            resultado = n1 / n2;
            break;
        default:
            std::cout << "Operacao Invalida!!" << std::endl;
            return 1;
    }

    std::cout << "Resultado: " << resultado << std::endl;

    system("Pause");
    return 0;
}