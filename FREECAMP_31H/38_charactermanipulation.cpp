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
    
    std::cout << std::endl;
    std::cout << "std::isalpha" << std::endl;

    std::cout <<"C os alphanumeric: " << std::isalpha('e') << std::endl;
    std::cout <<"^ os alphanumeric: " << std::isalpha('^') << std::endl;
    std::cout <<"7 os alphanumeric: " << std::isalpha('7') << std::endl;
    */

    std::cout << std::endl;
    std::cout << "std::isblank" << std::endl;
    std::cout <<"C os blank: " << std::isblank('C') << std::endl;

    char message[] {"Hello World"};
    int blank_char {};
    for (size_t i{0}; i<std::size(message); i++){
        if(std::isblank(message[i])){
            std::cout<<"found a blank" << i << std::endl;
            ++blank_char;
        }
    }
    std::cout<<"blank_char: " << blank_char << std::endl;
    
    int lower_case_char {};
    for (auto c : message){
        if(std::islower(c)){
            std::cout<<"found lower" << std::endl;
            ++lower_case_char;
        }
    }
    std::cout<<"lower_case_char: " << lower_case_char << std::endl;

    int digit_count{};
    for(auto c : message){
        if(std::isdigit(c)){
            std::cout<<"found digit" << std::endl;
            ++digit_count;
        }
    }
    std::cout<<"found digit: " << digit_count << std::endl;

    for(size_t i{}; i < std::size(message); i++){
        message[i] = std::toupper(message[i]); //tolower
    }
    std::cout<<"message: " << message << std::endl;
    return 0;
}