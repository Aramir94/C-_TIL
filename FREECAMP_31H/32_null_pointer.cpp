#include <iostream>

int main(){

    //Verbose nullptr check 
    std::cout << std::endl;
    std::cout << "Verbose nullptr check" << std::endl;
    
    int *p_number{};
    p_number = new int(7);

    if(!(p_number==nullptr)){
        std::cout << "p_number is not nullptr" << std::endl;
        std::cout << "*p_number = " << *p_number << std::endl;
    }else{
        std::cout << "p_number is nullptr" << std::endl;
    }

    delete p_number;
    nullptr;

    
    return 0;
}