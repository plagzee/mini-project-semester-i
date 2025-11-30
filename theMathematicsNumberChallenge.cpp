#include <iostream>

int main()
{
    int n, i, count;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    bool isEven = (n % 2 == 0);
    bool isPrime;

    // ------------------------
    
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
        else {
            continue;
        }
    }

    if (count <= 2)
        isPrime = true;
    else
        isPrime = false;

    // ------------------------


    if (isPrime) {
        std::cout << "Prime Number\n";
    } else {
        std::cout << "Not Prime\n";
    }

    if (isEven)
        std::cout << "Even Number" << std::endl;
    else 
        std::cout << "Odd Number" << std::endl;

    return 0;
}