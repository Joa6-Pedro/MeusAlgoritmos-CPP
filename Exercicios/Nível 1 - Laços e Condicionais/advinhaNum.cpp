/*
____________________________________________________________________
 Projeto  : Adivinha o Número
 Exercício: 1.5 — Nível 1 (Laços e Condicionais)
 Autor    : Joa6Pedro
 Data     : 17/03/26
____________________________________________________________________
 Descrição:
   Sorteia um número de 1 a 100 e dá dicas "maior/menor" a cada
   tentativa do usuário até ele acertar.
____________________________________________________________________
 Entradas : Chutes do usuário (int)
 Saídas   : Dicas de maior/menor e mensagem de acerto
____________________________________________________________________
*/

#include <iostream>
#include <cstdlib>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    srand(time(0));

    std::cout << "**************************************************************************" << std::endl
              << "                             JOGO ADVINHA NÚMERO                          " << std::endl;

    int nSecreto = rand() % 100 + 1;

    while (true){

        int chute;

        std::cout << "\nDigite seu chute entre 1 e 100: ";
        std::cin >> chute;

        if (chute == nSecreto) {
            std::cout << "\nVocê acertou!! Fim de jogo.\n";
            break;
        }else if (chute < nSecreto) {
            std::cout << "O número secreto é maior que " << chute << "\n";

        }else if (chute > nSecreto) {
            std::cout << "O número secreto é menor que " << chute << "\n";

        }else {
            std::cout << "Erro!! Tente novamente.\n";
        }

    }

    std::cout << "\n*****************************************************\n" << std::endl;

    system("Pause");
    return 0;
}