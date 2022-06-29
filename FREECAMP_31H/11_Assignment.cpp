#include <iostream>

int main(){
    int var1{123}; // Declare and initialize 
    std::cout << "var1 : " << var1 << std::endl;

    var1 = 55; // Assign
    std::cout << "var1 : " << var1 << std::endl;
    return 0;

    // 주의 AUTO로 했을때 ASSIGN 잘못되는지 항상 체크
    // 형 항상 체크,
}