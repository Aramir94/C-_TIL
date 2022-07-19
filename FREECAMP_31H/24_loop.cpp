#include <iostream>

int main(){
    /*
    for(unsigned int i{0}; i < 10 ; ++i){
        //loop to run
        std::cout << i <<  " : I love C++" << std::endl;
    }
    std::cout << "Loop Done!" << std::endl;
    */

   // Use size_t : a representation of some unsigned int for positive numbers 
    /*
    for(size_t i{0}; i<10;++i){
        std::cout << i <<  " : I love C++" << std::endl;
    }
    std::cout << "Loop Done!" << std::endl;

    return 0;
    */

   /*
   size_t i{0};
   for( ; i<10; ++i){
    std::cout << i <<  " : I love C++" << std::endl;
   }
   std::cout << "Loop Done!" << std::endl;
   std::cout << i <<  " : I love C++" << std::endl;
   */

  // Don't hardcode everything

  const size_t COUNT{100};

  for(size_t i{0}; i < COUNT; ++i){
    std::cout << i <<  " : I love C++" << std::endl;
  }
}