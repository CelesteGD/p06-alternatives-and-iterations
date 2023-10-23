/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 22 Oct 2023
 * @contact alu0101648361@ull.edu.es
 * @brief reads several descriptions of rectangles and circles, and for each one prints its corresponding area.
 */

#include <iostream>
#include <cmath>
#include <iomanip> 

int main() {
  std::cout << std::fixed;
  std::cout.precision(6);
  int number(0);
  std::cin >> number;
  
  for (int count(0); count < number; ++count) {
     std::string my_string;
     std::cin >> my_string;
     double base(0);
     double altura(0);

     if (my_string == "rectangle") {
	std::cin >> base >> altura;
	std::cout << base * altura << std::endl;
}
     if (my_string == "circle") { 
	double radio(0);
	std::cin >> radio;
	std::cout << M_PI * radio * radio << std::endl;
    }
  }
  return 0;
}
