/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

#include <iostream>

int main() {
    int n;
    std::cout << "Enter a natural number: ";
    std::cin >> n;

    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }

    std::cout << "The sum of natural numbers from 1 to " << n << " is: " << sum << std::endl;

    return 0;
}