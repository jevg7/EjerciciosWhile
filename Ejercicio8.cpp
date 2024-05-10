/*. Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/

#include <iostream>

int main() {
    int n;
    std::cout << "Enter the length of the vectors: ";
    std::cin >> n;

    int vector1[n];
    int vector2[n];

    std::cout << "Enter the elements of vector 1: ";
    for (int i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }

    std::cout << "Enter the elements of vector 2: ";
    for (int i = 0; i < n; i++) {
        std::cin >> vector2[i];
    }

    int product = 0;
    int i = 0;
    while (i < n) {
        product += vector1[i] * vector2[i];
        i++;
    }

    std::cout << "The dot product of the two vectors is: " << product << std::endl;

    return 0;
}