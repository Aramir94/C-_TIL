#include <iostream>

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};

    // Read beyond bounds : will crash garbage 
    std :: cout << numbers[12] << std::endl;

    numbers[129] = 100;
    std :: cout << numbers[129] << std::endl;

    std:: cout << numbers[9] << std::endl;
    return 0;
}