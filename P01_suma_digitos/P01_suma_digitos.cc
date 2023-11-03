/**
  *Universidad de La Laguna
  *Escuela superior de ingeniería y tecnología
  *Grado Ingenieria Informática
  *Informática Básica
  *
  *@file P01_suma_digitos
  *@date 03/11/2023
  *@author Guillermo González Pineda alu0101574899@ull.edu.es
  *@brief Este programa imprime la suma de los digitos del numero insertado por
	        el usuario.
  */

#include <iostream>

void sumaDigitos();

int main() {
  sumaDigitos();
  return 0;
}

void sumaDigitos() {
  int numero;
  while (std::cin >> numero) {
    int numero_final = numero;
    int suma = 0;
    while (numero > 0) {
      suma = suma + numero % 10;
      numero = numero / 10;
    }
    std::cout << "The sum of the digits of " << numero_final << " is " << suma << "." << std::endl;
  }
}