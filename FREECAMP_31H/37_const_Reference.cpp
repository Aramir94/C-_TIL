#include <iostream>

int main(){
    // Non const reference
    std::cout << std::endl;
    std::cout << "Non const reference" << std::endl;
    int age {27};
    const int& ref_age{age};
    
    /*
    std::cout << "Age: " << age << std::endl;
    std::cout << "Reference to age: " << ref_age << std::endl;

    //Can modify original variable through reference

    std::cout << std::endl;
    std::cout << "Modify original variable through referce: " << std::endl;
    
    //ref_age ++; error because const reference cannot be modified

    std::cout << "Age: " << age << std::endl;
    std::cout << "Reference to age: " << ref_age << std::endl;
    */

    const int * const p_age {&age};
    //compile error read only const *p_age = 28;
    return 0;
}