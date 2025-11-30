#include <iostream>

int main()
{
    int a, b;

    std::cout << "Enter the length and width of the land. (metres)" << std::endl;
    std::cin >> a >> b;

    std::cout << "Area = " << a * b << "m^2" << std::endl;
    std::cout << "Perimeter = " << 2 * (a + b) << "m" << std::endl;

    return 0;
}