#include <iostream>

int main () {
    int n, m;
    std::cin >> n >> m;
   
    int bill[100][100];
    int studentTotal[100]; 
    int dayTotal[100];

    for (int i = 0; i < n; i++) {
        studentTotal[i] = 0;
    }

    for (int j = 0; j < n; j++) {
        dayTotal[j] = 0;
    }

    for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cin >> bill[i][j];
                studentTotal[i] += bill[i][j];
                dayTotal[j] += bill[i][j];
            }
        }


        // Print for each student's weekly total
        for (int i = 0; i < n; i++) {
            std::cout << "Student " << i + 1 << ": " << studentTotal[i] << std::endl;
        }

        //Find the day with the highest total
        int maxDay = 0;
        for (int j = 1; j < m; j++) {
            if (dayTotal[j] > dayTotal[maxDay]) {
                maxDay = j;
            }
        }

        std::cout << "\nHighest collection on day " << maxDay + 1 << ": " << maxDay + 1 << std::endl;

        int maxSpend = studentTotal[0];
        for (int i = 1; i < n; i++) {
            if (studentTotal[i] > maxSpend) {
                maxSpend = studentTotal[i];
            }
        }

        std::cout << "Highest Spender: ";
        bool first = true;

        for (int i = 0; i < n; i++) {
            if (studentTotal[i] += maxSpend) {
                if (!first) std::cout << " and ";
                std::cout << "Student " << i + 1;
                first = false;
            }
        }

        std::cout << std::endl;

        return 0;

}