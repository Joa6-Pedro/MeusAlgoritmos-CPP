/*
*******************************************************************************************
                                    BUBBLE SORT
Requisito: leia N números inteiros, armazene em um array e ordene usando o algoritmo
de ordenação por bolha. Exiba o array antes e depois da ordenação.

autor: Eu mesmo;
data: 17/03/26;

*******************************************************************************************
*/

#include <iostream>
#include <cstdlib>

void BubbleSort(int* array, int N);

int main() {

    srand(time(0));

    int N;
    std::cout << "Digite a quantidade de numeros: ";
    std::cin >> N; //Coleta o tamanho do array.

    int* array = new int[N];
    for (int i=0; i < N; i++) {
        array[i] = rand() % 1000; //define N valores de 0-999.
    }

    std::cout << "\nArray antes do sort : [";
    for (int i=0; i < N; i++) {
        std::cout << " " << array[i] << " ";
    }std::cout << "]\n"; //Exibe o array antes da organização.

    std::cout << "\n_____________________________________________________________\n";

    BubbleSort(array, N); //Chama a função que organiza o array

    std::cout << "\nArray depois do sort : [";
    for (int i=0; i < N; i++) {
        std::cout << " " << array[i] << " ";
    }std::cout << "]\n"; //Exibe o array depois da organização.

    delete[] array; //Libera a memoria onde o array estava, deletando ele.

    system("Pause"); //Faz com que o cmd não feche imediatamente após o fim do algoritmo.
    return 0;
}

void BubbleSort(int* array, int N) {

    bool trocou = true; //cria a flag
    int temp; //cria um valor int temporário

    for (int i = N-1; i > 0 && trocou; i--) { //Loop para percorrer o array ao contrario se houverem trocas

        trocou = false; //reseta a flag

        for (int j = 0; j < i; j++) { //Loop para percorrer o array

            if (array[j] > array[j+1]) { //Valor atual > proximo valor? 

                temp = array[j];  //Atribui o valor atual para a var temporaria
                array[j] = array[j+1]; //Atribui o valor do proximo ao atual
                array[j+1] = temp; //Atribui o valor da var temporaria ao proximo
                trocou = true; //Retorna que o houve mudanças
            }
        }
    }
}