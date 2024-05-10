/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector*/

#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese la longitud de los vectores: ";
    std::cin >> n;

    int vector1[n];
    int vector2[n];
    int vectorSuma[n];

    std::cout << "Ingrese los elementos del primer vector:\n";
    int i = 0;
    while (i < n) {
        std::cin >> vector1[i];
        i++;
    }

    std::cout << "Ingrese los elementos del segundo vector:\n";
    i = 0;
    while (i < n) {
        std::cin >> vector2[i];
        i++;
    }

    i = 0;
    while (i < n) {
        vectorSuma[i] = vector1[i] + vector2[i];
        i++;
    }

    std::cout << "La suma de los vectores es:\n";
    i = 0;
    while (i < n) {
        std::cout << vectorSuma[i] << " ";
        i++;
    }

    return 0;
}