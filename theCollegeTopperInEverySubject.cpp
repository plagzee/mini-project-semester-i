#include <iostream>
#include <map>
#include <string.h>

int main() {

    int marks[5][3]; // marks[student][subject]

    std::map<int, std::string> subjectMap = {
        {0, "Mathematics"},
        {1, "Physics"},
        {2, "Computer Science"}
    };
    

    for (int i = 0; i < 5; i++) {
        std::cout << "Enter Marks for Student " << i+1 << ":\n";

        for (int j = 0; j < 3; j++) {
            std::cout << subjectMap[j] << ": ";
            std::cin >> marks[i][j];
        }
    }

    int maxMaths = -1, maxPhysics = -1, maxCS = -1;


    for (int i = 0; i < 5; i++) {
        if (marks[i][0] > maxMaths) {
            maxMaths = marks[i][0];
        }
        if (marks[i][1] > maxPhysics) {
            maxPhysics = marks[i][1];
        }
        if (marks[i][2] > maxCS) {
            maxCS = marks[i][2];
        }
    }

    std::cout << "\nHighest Marks in Mathematics: " << maxMaths << std::endl;
    std::cout << "Highest Marks in Physics: " << maxPhysics << std::endl;
    std::cout << "Highest Marks in Computer Science: " << maxCS << std::endl;

    return 0;
}