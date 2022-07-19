# include <iostream>
int main(){

    size_t i{0};
    const size_t COUNT{10};

    while (i < COUNT){
       std::cout << i << " I love C++" << std::endl;
        ++i;
    }
    std::cout << i << "loop done" << std::endl;
    return 0;
}