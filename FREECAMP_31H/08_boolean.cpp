#include <iostream>

int main(){
    bool red_light {true};
    bool green_light {false};

    if (red_light == true){
        std::cout << "stop!" << std::endl;
    }else{
        std::cout << "GO through!" << std::endl;
    }
    
    //sizeof()
    
    return 0;
}