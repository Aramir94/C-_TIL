# include <iostream>

int main(){
    int max{};
    int a{35};
    int b{20};

    int result = (a > b)? a : b;
    max = (a > b)? a : b; // true 일때 a, false일때 b 
    // (a if a> b else b) --> python way
    std::cout << result << std::endl;
}