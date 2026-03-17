/*
____________________________________________________________________
 Projeto  : Soma de Série
 Exercício: 1.6 — Nível 1 (Laços e Condicionais)
 Autor    : Joa6Pedro
 Data     : 17/03/26
____________________________________________________________________
 Descrição:
   Some os N primeiros inteiros com um laço e compare com a fórmula
   fechada N*(N+1)/2, confirmando que os resultados são iguais.
____________________________________________________________________
 Entradas : N (inteiro)
 Saídas   : Soma pelo laço, soma pela fórmula e comparação
____________________________________________________________________
*/

#include <iostream>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int N;
    int sumFormula = 0;
    int sumLoop = 0;

    std::cout << "Digite um valor inteiro: ";
    std::cin >> N;

    for (int i = 1; i <= N; i++){
        sumLoop += i;
    }

    sumFormula = N * (N+1) / 2;

    std::cout << "\nSomando todos os valores de 1 a " << N << "\n";

    std::cout << "\nSoma pelo loop = " << sumLoop << "\n";
    std::cout << "Soma pela fórmula = " << sumFormula << "\n";

    std::cout << "Os resultados são " << (sumLoop == sumFormula? "Iguais\n" : "Diferentes\n") << std::endl;

    system("Pause");
    return 0;
}