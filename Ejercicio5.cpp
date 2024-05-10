/* Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70
*/

#include <iostream>


int main() {
    int numStudents = 8;
    int passed = 0;
    int failed = 0;
    int totalGrade = 0;

    int i = 0;
    while (i < numStudents) {
        int grade;
        std::cout << "Enter the grade for student " << i + 1 << ": ";
        std::cin >> grade;

        totalGrade += grade;

        if (grade >= 70) {
            passed++;
        } else {
            failed++;
        }

        i++;
    }

    double average = static_cast<double>(totalGrade) / numStudents;

    std::cout << "Number of students passed: " << passed << std::endl;
    std::cout << "Number of students failed: " << failed << std::endl;
    std::cout << "Average grade: " << average << std::endl;

    return 0;
}