# include <iostream>

int addNumbers(int first_number, int second_number){
    int sum = first_number + second_number;
    return sum;

}

int main(int argc, char **argv)
{
    int firstNumber = 12; // 이런걸 statement라고 한다
    int secondNumber = 9;
    int sum = firstNumber + secondNumber;
    std::cout << "The sum of the tow number" << sum << std::endl;
    sum = addNumbers(firstNumber,secondNumber);
    std::cout << "The sum of the tow number" << sum << std::endl;
    return 0;
}