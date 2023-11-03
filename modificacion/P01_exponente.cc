/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P01_exponente.cc
  * @author Guillermo Gonzalez Pineda alu0101574899@ull.edu.es
  * @date 03/11/2023
  */

#include <iostream>

int main() {
  double numero;
  int potencia;
  std::cin >> numero >> potencia;
  double resultado = numero;
  while (potencia > 1) {
    resultado = resultado * numero;
    potencia--;
  }
  std::cout << resultado << std::endl;
}