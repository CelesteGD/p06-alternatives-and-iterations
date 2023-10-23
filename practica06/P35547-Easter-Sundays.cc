/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 22 Oct 2023
 * @contact alu0101648361@ull.edu.es
 * @brief computes the day D and the month M of the Easter Sunday of every given year Y.
 */

#include <iostream> 

int main() {
  int year(0);
  while (std::cin >> year) {
	int k = year / 100;
	int x = year % 19;
	int b = year % 4;
	int c = year % 7;
	int q = k / 4;
	int p = (13 + 8 * k) / 25;
	int y = (15 - p + k - q) % 30;
	int z = (19 * x + y) % 30;
	int n = (4 + k - q) % 7;
	int e = (2 * b + 4 * c + 6 * z + n) % 7;

	if (z + e <= 9) {
	   std::cout << 22 + z + e << "/3" << std::endl;
}
        else if (z == 29 && e == 6) {
		std::cout << "19/4" << std::endl;
}
        else if (z == 28 && e == 6 && x > 10) {
		std::cout << "18/4" << std::endl;
}
        else {
	     std::cout << z + e - 9 << "/4" << std::endl;
      }
    }
  return 0;
}
