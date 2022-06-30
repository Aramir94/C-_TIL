#include <iostream>

int main(){
    int number1{7};
    int number2{3};

    int result = number1 + number2;
    std::cout << "result : " << result << std::endl;

    result = number2 - number1;
    std::cout << "result : " << result << std::endl;
    
    result = number1 * number2;
    std::cout << "result : " << result << std::endl;
    
    result = number1 / number2;
    std::cout << "result : " << result << std::endl; //result : 2 -> 소수점 버리는 연산 

    result = number1 % number2;
    std::cout << "result : " << result << std::endl;

    return 0;
}