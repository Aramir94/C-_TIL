#include <iostream>
#include <string>

int main(){
    //printing data
    std::cout << "Hello C++" << std::endl;

    int age{21};
    std::cout << "Age: " << age << std::endl;

    std::cerr << "Error message : Something is wrong" << std::endl;
    std::clog << "Log message : Something is wrong" << std::endl;
    
    //
    int age1;
    std::string name;

    std::cout << "Please type your name and age: " << std::endl;

    std::cin >> name;
    std::cin >> age1;

    // std::cin >> name >> age1 한줄로 하는 버전
    
    /*
    // Data with spaces
    std::string fullname;
    int age3;

    std::getline(std::cin,fullname);
    std::cin >> age3
    */
   
    std::cout << "Hello" << name << " you are "  << age1  << std::endl;
    return 0;
}