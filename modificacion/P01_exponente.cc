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