#include <iostream>
int main(){
    /*
    int *p_number{new int{58}};
    int number {44};
    p_number = &number; // leak memory  
    */

    int *p_number{new int{58}};
    delete p_number; // how to escape the memory leak
    p_number = nullptr; 
    int number {44};
    p_number = &number; 

    // nest memory leak
    {
        int *p_number2{new int{58}}; // memory leak when not delete p_number2 in scope
    }
    return 0;
}