#include <iostream>

int main(){
    int scores [10] {1,2,3,4,5,6,7,8,9,10};

    int count {std::size(scores)};

    for(size_t i {0}; i < count; ++i){
        std::cout << "score " << scores[i]<< std::endl;
    }

    //Range Based for loop
    for(auto score : scores){
        std::cout << "score " << score<< std::endl;
    }
    
    return 0;
}
