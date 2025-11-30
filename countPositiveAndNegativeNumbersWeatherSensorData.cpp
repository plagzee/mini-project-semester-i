#include <iostream>

int main() {


    int n;

    std::cout << "Enter number of readings: ";
    std::cin >> n;

    int temps[n];
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter temperature reading " << (i + 1) << ": ";
        std::cin >> temps[i];
    }

    int pos, neg, zero;
    pos = neg = zero = 0;

    for (int i = 0; i < n; ++i) {
        if (temps[i] > 0) {
            pos++;
        } else if (temps[i] < 0) {
            neg++;
        } else {
            zero++;
        }
    }

    std::cout << "Positive = " << pos << std::endl;
    std::cout << "Negative = " << neg << std::endl;
    std::cout << "Zero = " << zero << std::endl;    

    return 0;

}