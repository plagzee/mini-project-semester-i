#include <iostream>

int findGCD(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int x, y;

    std::cout << "Enter the length of two wood planks: \n";
    std::cin >> x >> y;

    int gcd = findGCD(x, y);
    int lcm = (x * y) / gcd;

    std::cout << "GCD = " << gcd << "\n";
    std::cout << "LCM = " << lcm << "\n";


    return 0;
}