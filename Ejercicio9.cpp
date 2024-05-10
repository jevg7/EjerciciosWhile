/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>

int main() {
    int m, n, p, q;
    std::cout << "Enter rows and columns for first matrix: ";
    std::cin >> m >> n;
    int first[10][10];
    std::cout << "Enter elements of first matrix\n";
    int i = 0;
    while(i < m) {
        int j = 0;
        while(j < n) {
            std::cin >> first[i][j];
            j++;
        }
        i++;
    }

    std::cout << "Enter rows and columns for second matrix: ";
    std::cin >> p >> q;

    if (n != p) {
        std::cout << "The matrices can't be multiplied with each other.\n";
        return 0;
    }

    int second[10][10], multiply[10][10];
    std::cout << "Enter elements of second matrix\n";
    i = 0;
    while(i < p) {
        int j = 0;
        while(j < q) {
            std::cin >> second[i][j];
            j++;
        }
        i++;
    }

    i = 0;
    while(i < m) {
        int j = 0;
        while(j < q) {
            multiply[i][j] = 0;
            int k = 0;
            while(k < p) {
                multiply[i][j] += first[i][k] * second[k][j];
                k++;
            }
            j++;
        }
        i++;
    }

    std::cout << "Product of the matrices:\n";
    i = 0;
    while(i < m) {
        int j = 0;
        while(j < q) {
            std::cout << multiply[i][j] << "\t";
            j++;
        }
        std::cout << "\n";
        i++;
    }

    return 0;
}