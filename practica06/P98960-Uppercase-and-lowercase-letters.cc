/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 16 Oct 2023
 * @brief Insert a capital letter and with the ASCII table assign its lowercase letter
 *
 */

#include <iostream>

int main() {
  const int kDesplazamiento = 'a' - 'A';
  char letraMayuscula;
  char letraMinuscula;

  std::cin >> letraMayuscula;

  if (letraMayuscula >= 'A' && letraMayuscula <= 'Z') {
     letraMinuscula = char(int(letraMayuscula) + kDesplazamiento);
     std::cout << letraMinuscula << "\n";
  }
  else {
    (letraMayuscula >= 'a' && letraMayuscula <= 'z'); {
    letraMinuscula = char(int(letraMayuscula) -  kDesplazamiento);
    std::cout << letraMinuscula << "\n";

    }
  } 
}
