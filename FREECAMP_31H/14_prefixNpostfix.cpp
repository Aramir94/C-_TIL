#include <iostream>

int main(){

    int value {5};
    value = value + 1;
    std::cout<< "This value is " << value << std::endl;
    //=================================================
    //postfix
    value = 5;
    std::cout<< "This value is " << value++ << std::endl; //5
    std::cout<< "This value is " << value << std::endl; // 6

    std::cout<< "This value is " << value-- << std::endl; //6
    
    //prefix
    value = 5;
    std::cout<< "This value is " << ++value << std::endl; //6
    std::cout<< "This value is " << value << std::endl; // 6

    std::cout<< "This value is " << --value << std::endl; //5
    std::cout<< "This value is " << value << std::endl; //5

    return 0;
}