#include <iostream>

int main(){
    int value {45};

    std::cout << "The value is : " << value << std::endl;
    
    value += 5;
    std::cout << "The value is : " << value << std::endl;
    
    value -= 5;
    std::cout << "The value is : " << value << std::endl;
    
    value *= 5;
    std::cout << "The value is : " << value << std::endl;

    value /= 5;
    std::cout << "The value is : " << value << std::endl;

    value %= 5;
    std::cout << "The value is : " << value << std::endl;
}