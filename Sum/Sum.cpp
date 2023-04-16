/*
Sum
Pawelski
4/16/2023
C++
*/

#include <iostream>

int main()
{
    int number, sum = 0;
    std::cout << "Enter a number >> ";
    std::cin >> number;
    while (number != -1)
    {
        sum += number;
        std::cout << "Enter another number (-1 to exit) >> ";
        std::cin >> number;
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}