/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.
*/

#include <iostream>

int main() {
    int totalStudents = 10;
    int studentCount = 0;
    float totalGrade = 0;

    while (studentCount < totalStudents) {
        float grade;
        std::cout << "Enter the grade for student " << (studentCount + 1) << ": ";
        std::cin >> grade;

        totalGrade += grade;
        studentCount++;
    }

    float averageGrade = totalGrade / totalStudents;
    std::cout << "The average grade of the section is: " << averageGrade << std::endl;

    return 0;
}