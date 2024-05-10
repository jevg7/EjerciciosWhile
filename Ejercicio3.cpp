#include <iostream>

int main() {
    int sum = 0;
    int i = 1;

    while (i <= 100) {
        sum += i * i;
        i++;
    }

    std::cout << "The sum of the squares is: " << sum << std::endl;

    return 0;
}