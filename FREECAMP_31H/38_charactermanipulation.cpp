#include <iostream>

int main(){
    /*
    std::cout << std::endl;
    std::cout << "std::isalnum" << std::endl;

    std::cout <<"C os alphanumeric: " << std::isalnum('C') << std::endl;
    std::cout <<"^ os alphanumeric: " << std::isalnum('^') << std::endl;
    
    char input_char {'*'};
    //alphanumeric : 영숫자 
    if(std::isalnum(input_char)){
        std::cout<< input_char << " is alphanumeric" << std::endl;
    }else{
        std::cout<< input_char << " is not alphanumeric" << std::endl;
    }
    */
    std::cout << std::endl;
    std::cout << "std::isalpha" << std::endl;

    std::cout <<"C os alphanumeric: " << std::isalpha('e') << std::endl;
    std::cout <<"^ os alphanumeric: " << std::isalpha('^') << std::endl;
    std::cout <<"7 os alphanumeric: " << std::isalpha('7') << std::endl;
    

    return 0;
}