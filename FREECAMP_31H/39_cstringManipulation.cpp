# include <iostream>
# include <cstring>

int main(){
    //std::str len: length of string
    const char message1 [] {"The sky is blue"};

    //Array decays ontp pointer when we use const char *
    const char* message2 = "The sky is blue";
    std::cout << "message1 : " << message1 << std::endl;

    std::cout << "strlen(message1) : " << std::strlen(message1) << std::endl;
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;

    std::cout << "strlen(message2) : " << std::strlen(message2) << std::endl;
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;

    std::cout<< std::endl;
    std::cout << "std::strcmp : " << std::endl;
    const char* string_data1 { "Clabama"};
    const char* string_data2 { "Blabama"};

    //print out the comparision
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") :" << std::strcmp(string_data1, string_data2) << std::endl;
    // 글자 순서가 더 앞에 있으면 1 
    std::cout << "std::strcmp (" << string_data2 << "," << string_data1 << ") :" << std::strcmp(string_data2, string_data1) << std::endl;
    // 글자 순서가 더 뒤에 있으면 -1

    string_data1 = "Alabama"; // pointer로 넣은건 변경이 되는데 
    string_data2 = "Alabama";

    char string_data3 [] {"Alabama"};
    char string_data4 [] {"Alabama"};

    //string_data3  = "klabama"; //배열로 발급하면 변경이 불가능하다

    const char *str {"Try not The magic"};

    char target = 'T';
    const char *result = str;
    size_t iterations{};

    while ((result = std::strchr(result, target)) != nullptr){
        std :: cout << "Found " << target << " at " << result << std::endl;
        ++iterations;
        ++result;
    }

    std::cout << "iterations : " << iterations << std::endl;

    return 0;
}