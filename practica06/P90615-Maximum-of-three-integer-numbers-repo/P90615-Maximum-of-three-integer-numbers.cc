/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 22 Oct 2023
 * @contact alu0101648361@ull.edu.es
 * @brief reads three numbers and prints their maximum.  
 *
 */

#include <iostream> 

int main() {
  int numero1;
  int numero2;
  int numero3; 

  std::cin >> numero1;
  std::cin >> numero2;
  std::cin >> numero3;

  int numeromasgrande = numero1; 
  if (numero2 > numeromasgrande) { 
     numeromasgrande = numero2;
}  
  if (numero3 > numeromasgrande) {
     numeromasgrande = numero3; 
}

  std::cout << numeromasgrande << std::endl; 

}
