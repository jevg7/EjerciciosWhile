/*. Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100*/

#include <iostream>
using namespace std;
int main() {
    int num = 99; 

    while (num >= 1) {
        std::cout << num << " ";
        num -= 2; 
    }

    return 0;
}
