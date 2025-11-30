#include <iostream>

int main() {
    
    int n;

    std::cout << "Enter number of subjects: ";
    std::cin >> n;

    int marks[n];

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter marks for subject " << (i + 1) << ": ";
        std::cin >> marks[i];
    }

    int highest = marks[0], lowest = marks[0];

    for (int i = 1; i < n; ++i) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    std::cout << "Higest = " << highest << std::endl;
    std::cout << "Lowest = " << lowest << std::endl;

}