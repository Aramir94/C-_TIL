#include <iostream>
#include <cmath>

int main(){
    double weigh {7.77};

    std::cout << std::floor(weigh) << std::endl;

    double savings {-5000};
    std::cout << std::abs(savings) << std::endl;
    
    // e^10
    double exponential = std::exp(10);
    std::cout << exponential << std::endl;
    
    std::cout << std::pow(3,4) << std::endl;

    std::cout << std::log(exponential) << std::endl;

    std::cout << std::log10(100) << std::endl;   

    std::cout << std::round(2.3444) << std::endl;   

}