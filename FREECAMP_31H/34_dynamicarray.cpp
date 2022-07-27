#include <iostream>

int main(){
    size_t size{10};

    double *p_salaries { new double[size]}; // garbage data 
    int *p_student {new(std::nothrow) int[size]{} }; // all data 0
    double *p_score {new(std::nothrow) double[size]{1,2,3,4,5} }; // after 5 all data is 0

    for( size_t i{0}; i<size; i++){
        std::cout << "value : " << p_score[i] << ":" << *(p_score+i) << std::endl;
    }

    delete[] p_salaries;
    p_salaries = nullptr;
}