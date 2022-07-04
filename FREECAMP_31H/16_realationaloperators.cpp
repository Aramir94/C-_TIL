#include <iostream>

int main(){
    int number1 {45};
    int number2 {60};

    std::cout << std::boolalpha; // Make bool show ip as ture/false instead of 1/0
    std::cout << "number1 < number2: " << (number1 < number2) << std::endl;
    return 0;
}