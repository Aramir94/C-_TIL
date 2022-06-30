#include <iostream>

int main(){
    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    int result = a + b * c -d/e -f + g; // 6 + 24 - 3 -2 + 5 윈쪽에서 시작
                                        // C++ OPERATOR PRECEDENCE 참고

    std::cout << "result : " << result << std::endl;

    result = a/b*c +d -e +f ; // left to right a/b 하고 * c 임
    std::cout << "result : " << result << std::endl;

    return 0;
}