#include <iostream>

int main(){
    short int var1 {10}; // 2btyes
    short int var2 {20};

    char var3 {30}; // 1btyes
    char var4 {40};

    auto result = var1 + var2;
    auto result2 = var3 + var4;

    int result3 = var1 + var2;
    char result4 = var3 + var4;

    std::cout << result << std::endl;
    std::cout << result2 << std::endl;
    std::cout << result3 << std::endl;
    std::cout << result4 << std::endl;

}