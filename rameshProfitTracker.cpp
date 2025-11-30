#include <iostream>

int main () {

    int n;

    std::cout << "Enter nunmber of days: " << std::endl;
    std::cin >> n;

    int profit[n];

    for (int i = 0; i < n; i++) {

        std::cout << "Enter profit for day " << i + 1 << ": ";
        std::cin >> profit[i];

    }

    // x -> sum of all positive integers
    // y ->  sum of all negative integers represented as positive
    // z = x - y

    int x = 0, y = 0, z = 0;

    for (int i = 0; i < n; i++) {

        if (profit[i] >= 0) {
            x += profit[i];
        } else {
            y += (-profit[i]);
        }

    }

    z = x - y;

    std::cout << "Total Profit = " << x << std::endl;
    std::cout << "Total loss = " << y << std::endl;
    std::cout << "Net Balance = " << z << std::endl;

    return 0;

}