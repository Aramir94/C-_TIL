#include <iostream>

int main(){

    double double_data{55};
    double& ref_double_data{double_data};
    double* p_double_data{&double_data};

    //READING
    std::cout << "double_value " << double_data << std::endl;
    std::cout << "ref_double_value " << ref_double_data << std::endl;
    std::cout << "p_double_value " << p_double_data << std::endl;
    std::cout << "*p_double_value " << *p_double_data << std::endl;

    //Writting through pointer
    *p_double_data = 99.99;
    std::cout << std::endl;
    std::cout << "double_value " << double_data << std::endl;
    std::cout << "ref_double_value " << ref_double_data << std::endl;
    std::cout << "p_double_value " << p_double_data << std::endl;
    std::cout << "*p_double_value " << *p_double_data << std::endl;
    std::cout << "*ref_double_value " << &ref_double_data << std::endl;

    //Writting through reference
    ref_double_data = 88.88;
    std::cout << std::endl;
    std::cout << "double_value " << double_data << std::endl;
    std::cout << "ref_double_value " << ref_double_data << std::endl;
    std::cout << "p_double_value " << p_double_data << std::endl;
    std::cout << "*p_double_value " << *p_double_data << std::endl;

    double some_other_double{77.33};
    ref_double_data = some_other_double;

    std::cout << std::endl;
    std::cout << "double_value " << double_data << std::endl;
    std::cout << "ref_double_value " << ref_double_data << std::endl;
    std::cout << "p_double_value " << p_double_data << std::endl;
    std::cout << "*p_double_value " << *p_double_data << std::endl;

    return 0; 
}