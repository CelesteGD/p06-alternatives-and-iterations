/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 22 Oct 2023
 * @contact alu0101648361@ull.edu.es
 * @brief reads two numbers a and b, and prints all numbers between a and b 
 *
 */

#include <iostream> 

int main() {
  int numero1;
  int numero2;

  std::cin >> numero1;
  std::cin >> numero2;

  if (numero1 <= numero2) {
    for(int i(numero1); i < numero2  ; i++) {
       std::cout << i << ",";
  }
  std::cout << numero2 << std::endl;
}

  else {  
  std::cout << ""; 
  }
}
