/*
____________________________________________________________________
 Projeto  : Crivo de Eratóstenes
 Exercício: 2.5 — Nível 2 (Funções e Arrays)
 Autor    : Joa6Pedro
 Data     : 17/03/26

____________________________________________________________________
 Descrição:
   Leia um número N e liste todos os primos de 2 até N usando
   o algoritmo do crivo de Eratóstenes em função separada.
____________________________________________________________________
 Entradas : N (limite superior)
 Saídas   : Lista de primos de 2 até N
____________________________________________________________________
*/

#include <iostream>
#include <windows.h>
#include <cmath>
#include <thread>
#include <chrono>

void iniciaArray (bool* array,int N);
void calculaPrimos (bool* array,int N);
void exibePrimos (bool* array, int N);

int main() {

  SetConsoleCP(CP_UTF8);
  SetConsoleOutputCP(CP_UTF8);

  std::cout << "____________________________________________________________________________\n"
            << "                          CRIVO DE ERATÓSTENES                              \n";

  int N;
  std::cout << "\nDigite N: ";
  std::cin >> N; //Define N

  bool* array = new bool[N+1]; //Cria o array

  iniciaArray(array, N); //Inicia o array com todos os valores true exceto 0 e 1

  std::cout << "\nCalculando números primos...\n";
  std::this_thread::sleep_for(std::chrono::milliseconds(1000));
  calculaPrimos(array,N);

  exibePrimos(array,N);
  delete[] array;

  std::cout << "\n____________________________________________________________________________\n";
  std::cout << "\n";

  system("Pause");
  return 0;
}


void iniciaArray (bool* array,int N){

  array[0] = false;
  array[1] = false;

  for (int i = 2; i < N+1; i++) {
    array[i] = true;
  }

}

void calculaPrimos (bool* array,int N) {

  for (int i = 2; i < sqrt(N); i++) { //Percorre todos até N

    for(int j = i*2; j < N+1; j+=i) { //Set todos os multiplos como false
 
      array[j] = false;

    }
  }
}

void exibePrimos (bool* array, int N) {

  std::cout << "\nPrimos até " << N << ":\n";

  for (int i = 2; i < N+1; i++) {

    if (array[i] == true) {
      if (i > 2) std::cout << ", ";
        std::cout << i;
    }

  }

}