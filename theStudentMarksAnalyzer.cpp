#include <iostream>

int main()
{
    int n, i;
    float total = 0, average;

    std::cout << "Enter No. Of Students:- " << std::endl;
    std::cin >> n;

    std::cout << "Enter the marks: " << std::endl;
    
    int marks[n];

    for (i = 0; i < n; i++) {
        std::cin >> marks[n];
    }

    for (i = 0; i < n; i++) {
        total += marks[n];
    }


    average = (float) total / n;

    std::cout << "Total Marks = " << total << std::endl;
    std::cout << "Average Marks = " << average << std::endl;    
}