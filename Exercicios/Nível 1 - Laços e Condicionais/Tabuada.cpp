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