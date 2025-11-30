#include <iostream>

int main()
{
    int n;

    std::cout << "Check lucky number: " << std::endl;
    std::cin >> n;

    bool isEven = (n % 2 == 0);
    bool isDivBy5 = (n % 5 == 0);

    if (isEven) { 
        std::cout << "Even Number" << std::endl;
    } else {
        std::cout << "Odd Number" << std::endl;
    }   

    if (isDivBy5) {
        std::cout << "Divisible by 5" << std::endl;
    } else {
        std::cout << "Not Divisible by 5" << std::endl;
    }

    return 0;
}