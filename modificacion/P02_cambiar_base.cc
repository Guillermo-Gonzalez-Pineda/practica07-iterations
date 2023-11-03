#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> convertToBase(int numero, int base) {
  std::vector<int> resultado;   
  while (numero > 0) {
    int resto = numero % base;
    resultado.push_back(resto);
    numero = numero / base;
  }
  std::reverse(resultado.begin(), resultado.end());
  return resultado;
}

int main() {
  int numero, base;
  std::cin >> numero;
  std::cin >> base;
  std::vector<int> resultado = convertToBase(numero, base); 
  for (const int& i : resultado) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
