/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 22 Oct 2023
 * @contact alu0101648361@ull.edu.es
 * @brief reads a number n and prints the n-th harmonic number, defined as Hn = 1/1 + 1/2 + ⋯ + 1/n. 
 */

#include <iostream>

int main() {
    std::cout.setf(std::ios::fixed);
    std::cout.precision(4);


    int numero;
    std::cin >> numero;

    double Harmonic(0.0);

    for (int i = 1; i <= numero; ++i) {
        Harmonic += 1.0/i;
    }
    std::cout << Harmonic << std::endl;
}
