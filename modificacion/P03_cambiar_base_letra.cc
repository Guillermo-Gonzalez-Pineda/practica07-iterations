/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P03_cambiar_base_letra.cc
  * @author Guillermo Gonzalez Pineda alu0101574899@ull.edu.es
  * @date 03/11/2023
  */

#include <iostream>
#include <vector>
#include <algorithm>

std::string convertToBase(int numero, int base) {
  std::string result;
  while (numero > 0) {
      int resto = numero % base;
      char digit;
      if (resto < 10) {
          digit = '0' + resto;
      } else {
          digit = 'A' + (resto - 10);
      }
      result = digit + result;
      numero /= base;
  } 
  return result;
}

int main() {
  int numero, base;
  std::cin >> numero;
  std::cin >> base;
  std::string resultado = convertToBase(numero, base);
  std::cout << resultado << std::endl;  
  return 0;
}