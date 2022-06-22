#include <iostream>
// C++ core language Vs Standard library Vs STL 배움
// C++ Program Execution Model 배움

/* 
WHEN INITIALIZATION THE INT
1. Braced initialization int lion {1} --> code 오류시 compile error
2. Functional initialization int lion (1) --> code 오류시 데이터가 날라가고 실행은 됨 위험 
3. Assignment initialization int lion = 1
*/

int main(){
    // int --> 4bit
    //Braced initializers
    //Variable may contain random garbage value .WARNING
    int elephant_count; //garbage value it can be anything
    int lion_count {};//Initializes to zero
    int dog_count {10};
    int cat_count {15};
    
    int domesticated_animals {dog_count + cat_count};
    //int new_number {doesnt_exits}; compile error --> we can check it 
    //int narrowing_conversion {2.9}; compile error  --> we can check the bug 2.9 is double

    std::cout << elephant_count << std::endl;
    std::cout << lion_count << std::endl;
    std::cout << dog_count << std::endl;
    std::cout << cat_count << std::endl;

    //Functional initialization
    int elephant_count1; //garbage value it can be anything
    int lion_count1 ();//Initializes to zero
    int dog_count1 (10);
    int cat_count1 (15);
    //int narrowing_conversion (2.9); //Functional initializer --> 2로 나오게됨 이거 디게 위험
    //저장한 값이 아닌 반올림한 값이 나와 버리니 이거 위험 위험 

    int domesticated_animals1 {dog_count + cat_count};

    // Check the size with sizeof
    std::cout << "sizeof in : " << sizeof(int) << std::endl;
    std::cout << "sizeof dog_count" << sizeof(dog_count) << std::endl;
    return 0;

}
