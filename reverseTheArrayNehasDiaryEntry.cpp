#include <iostream>

int main ()
{
    std::cout << "Enter number of days: ";
    int days;
    std::cin >> days;

    std::cout << "Enter exercise timings for " << days << " days (in minutes):" << std::endl;
    int minutes[days];
    for (int i = 0; i < days; ++i) {
        std::cout << "Day " << (i + 1) << ": ";
        std::cin >> minutes[i];
    }

    // printing them in reverse order
    std::cout << "Exercise timings in reverse order:" << std::endl;
    for (int i = days - 1; i >= 0; --i)
    {
        std::cout << minutes[i] << "  ";
    }

    std::cout << std::endl;
    return 0;
}