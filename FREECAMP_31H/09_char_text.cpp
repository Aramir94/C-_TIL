#include <iostream>

int main(){

    char character1 {'a'};

    std::cout << character1 << std::endl;

    char value = 65; // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl;
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;
    //static_cast 형 따지 않고 원하는 형태로 변경 해줌

}