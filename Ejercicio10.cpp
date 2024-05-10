/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include <iostream>

int main() {
    int m, n;
    std::cout << "Enter rows and columns for the matrix: ";
    std::cin >> m >> n;
    int matrix[10][10];
    std::cout << "Enter elements of the matrix\n";
    int i = 0;
    while(i < m) {
        int j = 0;
        while(j < n) {
            std::cin >> matrix[i][j];
            j++;
        }
        i++;
    }

    int transpose[10][10];
    i = 0;
    while(i < n) {
        int j = 0;
        while(j < m) {
            transpose[i][j] = matrix[j][i];
            j++;
        }
        i++;
    }

    std::cout << "Transpose of the matrix:\n";
    i = 0;
    while(i < n) {
        int j = 0;
        while(j < m) {
            std::cout << transpose[i][j] << "\t";
            j++;
        }
        std::cout << "\n";
        i++;
    }

    return 0;
}