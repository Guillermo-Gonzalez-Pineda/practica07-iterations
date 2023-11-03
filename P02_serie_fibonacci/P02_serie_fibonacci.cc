/**
  *Universidad de La Laguna
  *Escuela superior de ingeniería y tecnología
  *Grado Ingenieria Informática
  *Informática Básica
  *
  *@file P02_serie_fibonacci.cc
  *@date 03/11/2023
  *@author Guillermo González Pineda alu0101574899@ull.edu.es
  *@brief Este programa imprime la serie de fibonacci con tantos digitos como el
          numero que haya insertado el usuario.
  */

#include <iostream>

bool serieFibonacci() {
  int numero;
  while (std::cin >> numero) {
    if (numero <= 0) {
      std::cout << "El valor de N debe ser mayor que 0." << std::endl;
      return true;
    }
    int aux1 {0}, aux2 {1}, aux3 {0};
    if (numero >= 1) {
      std::cout << aux1;
    }
    if (numero >= 2) {
      std::cout << " " << aux2;
    }
    for (int i = 3; i <= numero; ++i) {
      aux3 = aux1 + aux2;
      std::cout << " " << aux3;
      aux1 = aux2;
      aux2 = aux3;
    }
    std::cout << std::endl;
  }
  return false;
}

int main() {
  bool error = serieFibonacci();
  if (error == true) {
    return 1;
  } else {
    return 0;
  }
}