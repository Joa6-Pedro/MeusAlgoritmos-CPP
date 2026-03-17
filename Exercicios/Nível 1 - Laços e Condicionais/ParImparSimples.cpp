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