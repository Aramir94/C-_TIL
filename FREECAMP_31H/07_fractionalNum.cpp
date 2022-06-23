#include <iostream>
#include <iomanip>

// factional number --> float number 
int main(){

    //Declare and initialize the variables
    float number1 {1.1234567890f};
    double number2 {1.1234567890};
    long double number3 {1.1234567890L};

    std::cout << "sizeof number1 : " << sizeof(number1) << std::endl;
    std::cout << "sizeof number2 : " << sizeof(number2) << std::endl;
    std::cout << "sizeof number3 : " << sizeof(number3) << std::endl;

    //Precision
    std::cout << std::setprecision(20);
    std::cout << "sizeof number1 : " << number1 << std::endl; //Precision : 7
    std::cout << "sizeof number2 : " << number2 << std::endl;
    std::cout << "sizeof number3 : " << number3 << std::endl;

    return 0;
}
