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