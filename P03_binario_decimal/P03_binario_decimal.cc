/**
  *Universidad de La Laguna
  *Escuela superior de ingeniería y tecnología
  *Grado Ingenieria Informática
  *Informática Básica
  *
  *@file P03_binario_decimal.cc
  *@date 03/11/2023
  *@author Guillermo González Pineda alu0101574899@ull.edu.es
  *@bried Este programa conviarte numeros binarios a su forma decimal, en caso
          de no introducir un numero binario, dara un error.
  */

#include <iostream>
#include <cmath>

int conversorBinario(int valor_bin) {
  int decimal {0}, recorrido {0}, resto{0};
  while (valor_bin != 0) {
    resto = valor_bin % 10;
    valor_bin = valor_bin / 10;
    if (resto != 0 && resto != 1) {
      return 0;
    }
    decimal += resto * std::pow(2, recorrido);
    ++recorrido;
  }
  return decimal;
}

int main() {
  long int valor_bin;
  while (std::cin >> valor_bin) {
    if (conversorBinario(valor_bin) == 0) {
      std::cout << "Wrong Input" << std::endl;
      continue;
    }
    std::cout << conversorBinario(valor_bin) << std::endl;
  }
  return 0;
}
