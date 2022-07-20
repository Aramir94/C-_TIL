#include <iostream>

int main(){
    //Declare an array of integers
    int scores [10]; //array size declare //Junk data 

    //Read data
    std::cout << "score [0] : " << scores[0] << std::endl;
    
    for (int i = 0; i < 5; i++){
        std::cout << "score " << scores[i]<< std::endl;
    }

    //Write data into an array

    /*
    scores[0] = 20;
    scores[1] = 30;
    scores[2] = 40;
    scores[3] = 50;
    scores[4] = 60;
    scores[5] = 70;
    */

   for(size_t i = 0; i < 5; i++){
       scores[i] = i * 10;
   } 

    for (int i = 0; i < 5; i++){
        std::cout << "score " << scores[i]<< std::endl;
    }

    double salaries[5] {12.6, 13.6, 14.6, 15.6, 16.6};
    for (size_t i = 0; i < 5; i++){
        std::cout << "salary " << salaries[i]<< std::endl;
    }

    //Omit the size of the array at declaration
    int class_size[] {10, 20, 30, 40, 50}; // compiler know size!
    class_size[0] = 200;
    std::cout << class_size[0] << std::endl;

}
