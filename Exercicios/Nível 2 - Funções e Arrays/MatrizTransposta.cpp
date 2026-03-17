/*
____________________________________________________________________
 Projeto  : Matriz Transposta
 Exercício: 2.4 — Nível 2 (Funções e Arrays)
 Autor    : Eu mesmo
 Data     : 17/03/26
 Versão   : v1
____________________________________________________________________
 Descrição:
   Leia uma matriz N×N, exiba a matriz original e sua transposta.
   A transposição é feita em função separada.
____________________________________________________________________
 Entradas : N (tamanho), valores da matriz
 Saídas   : Matriz original e transposta formatadas
____________________________________________________________________
*/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <thread>
#include <chrono>

void inputValores (int** matrizOriginal, int N);
void inputValoresAuto (int** matrizOriginal, int N);
void transporMatriz (int** matrizOriginal, int** matrizTransposta, int N);
void exibeMatriz (int** matriz, int N);
void deletaMatrizes (int** matrizOriginal, int** matrizTransposta, int N);

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(0));


    std::cout << "____________________________________________________________________\n"
              << "                     TRANSPOSIÇÃO DE MATRIZES                        \n";


    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    int N;
    std::cout << "\nDigite o tamanho da matriz quadrada: ";
    std::cin >> N; //Define tamanho da matriz

    if (N <= 0) {
        std::cout << "Tamanho inválido.\n";
        system("Pause");
        return 1;
    }


    //Gera as matrizes
    int** matrizOriginal = new int*[N]; // array de N ponteiros
    int** matrizTransposta = new int*[N];

    for (int i = 0; i < N; i++) {
        matrizOriginal[i] = new int[N]; // cada ponteiro aponta para uma linha
        matrizTransposta[i] = new int[N];
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    //inputValores(matrizOriginal, N);
    inputValoresAuto(matrizOriginal,N); //Em caso de preguiça
    

    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "\nOriginal:\n";
    exibeMatriz(matrizOriginal,N);


    std::cout << "Calculando...\n";   
    transporMatriz(matrizOriginal, matrizTransposta, N);
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));


    std::cout << "\nTransposta:\n";
    exibeMatriz(matrizTransposta,N);


    std::cout << "\n____________________________________________________________________\n";

    deletaMatrizes(matrizOriginal,matrizTransposta,N);
    system("Pause");
    return 0;
}

//Fim da Main *********************************************************************


void inputValores(int** matrizOriginal, int N) {

    for (int i = 0; i < N; i++) {

        std::cout << "\nDigite os valores da fileira " << i+1 
        << " com um espaço entre cada valor: ";
        std::this_thread::sleep_for(std::chrono::milliseconds(300));

        for (int j = 0; j < N; j++) {
            std::cin >> matrizOriginal[i][j];
        }
    }
}

void inputValoresAuto (int** matrizOriginal, int N) { //Em caso de preguiça

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {
           matrizOriginal[i][j] = rand() % 10;
        }
    }
}

void transporMatriz(int** matrizOriginal, int** matrizTransposta, int N){

    for (int i = 0; i < N; i++) {
        
        for (int j = 0; j < N; j++){
            matrizTransposta[i][j] = matrizOriginal[j][i];
        }

    }
}

void exibeMatriz (int** matriz, int N) {

    for (int i = 0; i < N; i++) {
        
        for (int j = 0; j < N; j++){
            std::cout << matriz[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

void deletaMatrizes(int** matrizOriginal, int** matrizTransposta, int N) {

    for (int i = 0; i < N; i++) {
        delete[] matrizOriginal[i]; // deleta cada linha        
        delete[] matrizTransposta[i];
    }
    
    delete[] matrizOriginal; // deleta o array de ponteiros
    delete[] matrizTransposta;
}