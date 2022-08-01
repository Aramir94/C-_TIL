#include <iostream>

int main(){
    int in_data{33};
    double double_data{55};

    //References
    int& ref_int_data{in_data};
    double& ref_double_data{double_data};

    //Print stuff out
    std::cout << "in_data: " << in_data << std::endl;
    std::cout << "double_data: " << double_data << std::endl;
    std::cout << "ref_int_data: " << ref_int_data << std::endl;
    std::cout << "ref_double_data: " << ref_double_data << std::endl;

    std::cout << "&in_data: " << &in_data << std::endl;
    std::cout << "&double_data: " << &double_data << std::endl;
    std::cout << "&ref_int_data: " << &ref_int_data << std::endl;
    std::cout << "&ref_double_data: " << &ref_double_data << std::endl;

    in_data = 111;
    double_data = 67.02;

    //Print stuff out
    std::cout << std::endl;
    std::cout << "in_data: " << in_data << std::endl;
    std::cout << "double_data: " << double_data << std::endl;
    std::cout << "ref_int_data: " << ref_int_data << std::endl;
    std::cout << "ref_double_data: " << ref_double_data << std::endl;

    std::cout << "&in_data: " << &in_data << std::endl;
    std::cout << "&double_data: " << &double_data << std::endl;
    std::cout << "&ref_int_data: " << &ref_int_data << std::endl;
    std::cout << "&ref_double_data: " << &ref_double_data << std::endl;

    ref_int_data = 1203; // 여기를 바꿔도 같이 바뀌게 된다
    ref_double_data = 19999.03; // 여기를 바꿔도 같이 바뀌게 된다

    //Print stuff out
    std::cout << std::endl;
    std::cout << "in_data: " << in_data << std::endl;
    std::cout << "double_data: " << double_data << std::endl;
    std::cout << "ref_int_data: " << ref_int_data << std::endl;
    std::cout << "ref_double_data: " << ref_double_data << std::endl;

    std::cout << "&in_data: " << &in_data << std::endl;
    std::cout << "&double_data: " << &double_data << std::endl;
    std::cout << "&ref_int_data: " << &ref_int_data << std::endl;
    std::cout << "&ref_double_data: " << &ref_double_data << std::endl;

    return 0;
}