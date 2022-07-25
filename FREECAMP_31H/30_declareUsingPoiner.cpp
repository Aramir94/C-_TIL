# include <iostream>

int main(){

    //Declare and initialize pointer
    int * p_number {}; // will initialize to nullptr
    double* p_fraction_number {}; // will initialize to nullptr

    // Explicitly initialize with nullptr
    int * p_number_2 {nullptr}; // will initialize to nullptr
    double* p_fraction_number_2 {nullptr}; // will initialize to nullptr

    // Pointer to differnert varaibales are of the same size
    std::cout << "sizeof(p_number) = " << sizeof(p_number) << std::endl;
    std::cout << "sizeof(p_fraction_number) = " << sizeof(p_fraction_number) << std::endl;
    
    int *p_number_3{}, other_int_var{}; //p_number is pointer but other_int_var is not pointer
    int* p_number_4{}, other_int_var_2{}; //p_number_4 is pointer but other_int_var_2 is not pointer
    std::cout << "sizeof(p_number_3) = " << sizeof(p_number_3) << std::endl;
    std::cout << "sizeof(other_int_var) = " << sizeof(other_int_var) << std::endl;

    int int_var {43};
    int* p_int_var {&int_var}; // p_int_var is pointer to int_var

    std::cout << "(int_var) = " << int_var << std::endl;
    std::cout << "address in memory(p_int_var) = " << p_int_var << std::endl;

    // Can't cross assign between pointers of different types
    int *p_int1{};
    double double_var{33};

    //p_int = &double_var; // will crash

    //Dereferencing a pointer
    std::cout << "*p_int_var = " << *p_int_var << std::endl;


    return 0;
}