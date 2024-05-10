/*. Hacer un programa que sume los números pares comprendidos entre
100 y 200.
*/
#include <iostream>
int main(){
int sum = 0;
int num = 100;

while (num <= 200) {
    if (num % 2 == 0) {
        sum += num;
    }
    num++;
}


std::cout << "The sum of even numbers between 100 and 200 is: " << sum << std::endl;

}