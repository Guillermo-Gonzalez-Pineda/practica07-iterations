/**
  *Universidad de La Laguna
  *Escuela superior de ingeniería y tecnología
  *Grado Ingenieria Informática
  *Informática Básica
  *
  *@file leap-year.cc.cc
  *@date 12/11/2022
  *@author Guillermo González Pineda alu0101574899@ull.edu.es
  */

#include <iostream>

int divisionEntre4(int numero) {
  int const kMultiplo_4 = 4;
  if(numero % kMultiplo_4 == 0) {
    return 0;
  }
  else {
    return 1;
  }
}

int divisionEntre100(int numero) {
  int const kMultiplo_100 = 100;
  if(numero % kMultiplo_100 == 0) {
    return 0;
  }
  else {
    return 1;
  }
}

int primeros_digitos(int numero) {
  int const kMultiplo_100 = 100;
  int division = numero / kMultiplo_100;
  return division;
}

int main() {
  int anyo;
  while (std::cin >> anyo) {
    if((divisionEntre4(anyo) == 0) && (divisionEntre100(anyo) != 0)) {
      std::cout << "YES";
      std::cout << std::endl;
    }
    else if(divisionEntre4(anyo) == 0 && divisionEntre100(anyo) == 0 && divisionEntre4(primeros_digitos(anyo)) == 0) {
      std::cout << "YES";
      std::cout << std::endl;
    }
    else {
      std::cout << "NO";
      std::cout << std::endl;
    }
  }
}