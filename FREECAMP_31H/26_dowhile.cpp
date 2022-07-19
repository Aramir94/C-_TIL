#include <iostream>

int main(){
    //make do while loop

    const int COUNT{0};
    size_t i{0}; // must perform once

    do{
        std::cout << i << " I LOVE C++" << std::endl;
        ++i; 
    }while (i< COUNT);

    return 0;
} 