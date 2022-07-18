#include <iostream>

int main(){

    int number1 {66};
    int number2 {60};

    bool result = (number1 < number2);

    /*
    if(result == true){
        std::cout << number1 << " is less than" << number2 << std::endl;
    }
     if(!(result == true)){
        std::cout << number1 << " is more than " << number2 << std::endl;
    }
    */

   if (result == true){
        std::cout << number1 << " is less than" << number2 << std::endl;
    }else{
        std::cout << number1 << " is more than " << number2 << std::endl;
    }

}