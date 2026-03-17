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