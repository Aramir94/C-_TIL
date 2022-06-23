#include <iostream>

//int : 4bit
//signed int : 4bit
//unsigned int : 4bit

// short : 2bit
// short short int : 2bit
// signed short : 2bit
// signed short short : 2bit
// unsigned short short int : 2bit

// long : 8bit
// long long int : 8bit
// signed long : 8bit
// signed long long int : 8bit
// unsigned long long int : 8bit

int main(){

    int value1 {10};
    int value2 {-300};

    std::cout << "value1 " << value1 << std::endl;
    std::cout << "value2 " << value2 << std::endl;

    std::cout << "size of value1 " << sizeof(value1) << std::endl;
    std::cout << "size of value2 " << sizeof(value2) << std::endl;

    // signed : 부호가 있어도 상관이 없다 
    signed int value3 {10};
    signed int value4 {-300};

    std::cout << "value3 " << value3 << std::endl;
    std::cout << "value4 " << value4 << std::endl;

    std::cout << "size of value3 " << sizeof(value3) << std::endl;
    std::cout << "size of value4 " << sizeof(value4) << std::endl;

    // unsigned : 무조건 양수만 받는다
    unsigned int value5 {10};
    // unsigned int value4 {-300}; --> compile error

    std::cout << "value5 " << value5 << std::endl;

    std::cout << "size of value5 " << sizeof(value5) << std::endl;

    return 0;
}