/*
____________________________________________________________________
 Projeto  : FizzBuzz
 Exercício: 1.4 — Nível 1 (Laços e Condicionais)
 Autor    : Joa6Pedro
 Data     : 17/03/26
____________________________________________________________________
 Descrição:
   De 1 a 100: múltiplos de 3 imprime "Fizz", de 5 imprime "Buzz",
   de ambos imprime "FizzBuzz", caso contrário o número.
____________________________________________________________________
 Entradas : Nenhuma
 Saídas   : Sequência de 1 a 100 com Fizz/Buzz/FizzBuzz
____________________________________________________________________
*/

#include <iostream>

int main() {

    std::string txt;

    for (int i = 1; i <= 100; i++){

        if (i % 5 == 0 && i % 3 == 0) {
            txt = "FizzBuzz\n";

        }
        else if (i % 5 == 0) {
            txt = "Buzz\n";

        }
        else if (i % 3 == 0) {
            txt = "Fizz\n";

        }else {
            std::cout << i << std::endl;
            continue;
        }
        
        std::cout << i << " - " << txt;
    }

    system("Pause");
    return 0;
}