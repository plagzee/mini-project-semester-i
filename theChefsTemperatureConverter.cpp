#include <iostream>

int main()
{
    float c;

    std::cout << "Enter the temperature in Celcius:" << std::endl;
    std::cin >> c;

    float f = (c * 9/5) + 32;

    std::cout << "Temperature in Farenheit = " << f << "F" << std::endl;

    return 0;
}