/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 22 Oct 2023
 * @contact alu0101648361@ull.edu.es
 * @brief adds one second to a clock time, given its hours, minutes and seconds. 
 */

#include <iostream>
#include <iomanip>

int main() {
  int hora;
  int minutos;
  int segundos;

    std::cin >> hora;
    std::cin >> minutos;
    std::cin >> segundos;

    // Añadir un segundo
    segundos++;

    if (segundos == 60) {
        segundos = 0;
        minutos++;
        if (minutos == 60) {
            minutos = 0;
            hora++;
            if (hora == 24) {
                hora = 0;
            }
        }
    }

  std::cout << std::setw(2) << std::setfill('0') << hora << ":";
  std::cout << std::setw(2) << std::setfill('0') << minutos << ":";
  std::cout << std::setw(2) << std::setfill('0') << segundos << std::endl;

    return 0;
}
