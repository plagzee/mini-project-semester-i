#include <iostream>


int main() {

    int n;

    std::cout << "Enter the number of students:- " << std::endl;
    std::cin >> n;

    int attendance[n];

    for (int i = 0; i < n; i++) {
    
        std::cout << "Enter the attendance of student " << i + 1 << ": ";
        std::cin >> attendance[i];

    }                   

    int present = 0, absent = 0;

    for (int i = 0; i < n; i++) {
    
        if (attendance[i] == 1) {
            present++;
        } else {
            absent++;
        }

    }

    std::cout << "Present = " << present << std::endl;
    std::cout << "Absent = " << absent << std::endl;

    return 0;
}