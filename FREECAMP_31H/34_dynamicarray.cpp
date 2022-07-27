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

    //Static array Vs dynamic array
    //Static array is fixed size and can not be changed.
    //Dynamic array is dynamic size and can be changed.

    int scores[10]{1,2,3,4,5,6,7,8,9,10}; // static array 

    std:: cout << "scores size" << sizeof(scores) << std::endl;
    for(auto s: scores){
        std::cout << s << std::endl;
    }

    int * p_scores1 {new int[10]{1,2,3,4,5,6,7,8,9,10}}; // dynamic array
                                                        // live on the heap
    // not working sizeof and for in dynamic array
    /*
    std:: cout << "p_scores1 size" << sizeof(p_scores1) << std::endl;
    for(auto s: p_scores1){
        std::cout << s << std::endl;
    }
    */
    return 0;
}