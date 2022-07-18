#include <iostream>

const int Pen{ 10 };
const int Eraser2{ 40 };
const int Eraser{ 30 };

int main(){
    int tool {Eraser2};

    switch (tool)
    {
        case Pen : {
            std::cout << "this is Pen" << std::endl;
        }
        break;

         case Eraser : {
            std::cout << "this is Eraser" << std::endl;
        }
        break;
    
    default: {
        std::cout <<"no match" << std::endl;
    }
        break;
    }
}
