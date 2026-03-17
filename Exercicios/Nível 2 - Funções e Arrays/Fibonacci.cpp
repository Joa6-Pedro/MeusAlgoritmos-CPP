/*
*************************************************************************************
Requisito: 
    Leia um número N e gere os N primeiros termos da sequência de Fibonacci.
    Implemente duas versões em funções separadas:
    - fibIterativo(int n) — usando while ou for
    - fibRecursivo(int n) — chamando a própria função

Autor: Eu mesmo;
Data: 17/03/26.
*************************************************************************************
*/

#include <iostream>

void fibIterativo(int N, int* array);
int fibRecursivo(int N);

int main() {

    std::cout << "____________________________________________________________________\n"
              << "             CALCULO SEQUENCIA DE FIBONACCI                 \n";

    int N;
    std::cout << "\nDigite N: ";
    std::cin >> N; //Define N

    int* array_fibIterativo = new int[N]; //Cria um array com valor dinâmcico
    int* array_fibRecursivo = new int[N]; //Cria outro array com valor dinâmico

    fibIterativo(N, array_fibIterativo); //Define os valores do 1º array

    for (int i = 0; i < N; i++) { //Loop para percorrer todos os valores do array
        array_fibRecursivo[i] = fibRecursivo(i); //Define cada valor do array
    }

    std::cout << "\nIterativo: ["; //Exibe Iterativo
    for (int i = 0; i < N; i++){
        std::cout << " " << array_fibIterativo[i];
    }std::cout << " ]\n";

    std::cout << "\nRecursivo: ["; //Exibe Recursivo
    for (int i = 0; i < N; i++){
        std::cout << " " << array_fibRecursivo[i];
    }std::cout << " ]\n";

    std::cout << "\n____________________________________________________________________\n\n";

    delete[] array_fibIterativo;
    delete[] array_fibRecursivo;

    system("Pause");
    return 0;
}

void fibIterativo(int N, int* array){

    array[0] = 0;
    array[1] = 1;

    for (int i = 2; i < N; i++) {
        array[i] = array[i-1] + array[i-2];
    }

}

int fibRecursivo(int N){

    if (N == 0) {
        return 0;
    }else if (N == 1) {
        return 1;
    }else{
        return fibRecursivo(N-1) + fibRecursivo(N-2);
    }

}