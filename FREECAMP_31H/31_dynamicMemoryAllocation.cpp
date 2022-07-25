# include <iostream>

int main(){
    int number {22}; //Stack memory
    int *p_number {&number};
    /*
    //BAD
    // Writing into uninitialize pointer through derefrence
    int *p_number2; // Contains junk address ; could be anything
    *p_number2 = 55; // Writing into junk address : Bad!
    std::cout << "*p_number2 = " << *p_number2 << std::endl;
    std::cout << "p_number2 = " << p_number2 << std::endl;
    */
   
    /*
   // BAD2
    int *p_number2 {}; // initialized the pointer equivalent of zero
    *p_number2 = 55; // writting into a pointer pointin nowhere : BAD
    std::cout << "*p_number2 = " << *p_number2 << std::endl;
    std::cout << "p_number2 = " << p_number2 << std::endl;
    */

   // Dynamic heap memory allocation
    int *p_number4{}; // initialized the pointer equivalent of zero
    p_number4 = new int; // Dynamically allocate space for a single int on the heap
                        // This memory belons to our program from now on
                        // we will have a valid memory location allocated
                        // the size of the allocated memory will be such that it can store the 
                        // type pointed to by the pointer
    
    *p_number4 = 55; // store in the heap now 
    std::cout << "*p_number4 = " << *p_number4 << std::endl;

    delete p_number4; // free the memory allocated on the heap
    p_number4 = nullptr; // set the pointer to nullptr
    // std::cout << "*p_number4 = " << *p_number4 << std::endl;

    // you can re-allocate the memory again
    p_number4 = new int {20}; // Dynamically allocate space for a single int on the heap
    std::cout << "*p_number4 = " << *p_number4 << std::endl;
    
    return 0;
}