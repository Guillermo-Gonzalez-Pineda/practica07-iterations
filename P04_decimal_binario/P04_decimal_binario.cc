/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P04_decimal_binario.cc
  * @author Guillermo Gonzalez Pineda alu0101574899@ull.edu.es
  * @date 03/11/2023
  * @brief El programa cambia valores de binario a decimal
  * @bug There are no known bugs
  */

#include <iostream>

void imprimirIntroduccion() {
  std::cout << "El programa lee un número decimal e imprime su";
  std::cout <<  " representación en binario" << std::endl;
  std::cout << "Escriba el número:" << std::endl;
}
int decimalBinario(int decimal) {
  int binario {0};
  int resto {1};
  int cambio_cifra {1};
  while (decimal != 0) {
    resto = decimal % 2;
    binario += resto * cambio_cifra;
    cambio_cifra = cambio_cifra * 10; 
    decimal /= 2;
  }
  return binario;
}
int main() {
  // imprimirIntroduccion();
  int decimal {0};
  while (std::cin >> decimal) {
    std::cout << decimalBinario(decimal) << std::endl;
  }
  return 0;
}