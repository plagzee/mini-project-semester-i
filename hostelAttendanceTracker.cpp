#include <iostream>

int main() {
    int A[10][7]; // A[student_id][day_of_week]

    // Input attendance
    for (int i = 0; i < 10; i++) {
        std::cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < 7; j++) {
            std::cin >> A[i][j];
            if (A[i][j] != 0 && A[i][j] != 1) {
                std::cout << "Invalid input! Enter 0 or 1 only.\n";
                j--; 
            }
        }
    }

    // Display total present days per student
    std::cout << "\nTotal Present Days:\n";
    for (int i = 0; i < 10; i++) {
        int presentDays = 0;
        for (int j = 0; j < 7; j++) {
            presentDays += A[i][j];
        }
        std::cout << "Student " << i + 1 << ": " << presentDays << std::endl;
    }

    // Find student with highest attendance
    int maxAttendance = 0;
    int studentWithMaxAttendance = 0;
    for (int i = 0; i < 10; i++) {
        int presentDays = 0;
        for (int j = 0; j < 7; j++) {
            presentDays += A[i][j];
        }
        if (presentDays > maxAttendance) {
            maxAttendance = presentDays;
            studentWithMaxAttendance = i;
        }
    }

    std::cout << "\nStudent with Highest Attendance:\n";
    std::cout << "Student " << studentWithMaxAttendance + 1
              << " (" << maxAttendance << " days)" << std::endl;

    // Find day with lowest overall attendance
    int minAttendance = 10; // since max students = 10
    int dayWithMinAttendance = 0;

    for (int j = 0; j < 7; j++) {
        int totalPresent = 0;
        for (int i = 0; i < 10; i++) {
            totalPresent += A[i][j];
        }

        if (totalPresent < minAttendance) {
            minAttendance = totalPresent;
            dayWithMinAttendance = j;
        }
    }

    std::cout << "\nDay with Lowest Overall Attendance: Day "
              << dayWithMinAttendance + 1
              << " (" << minAttendance << " students present)" << std::endl;

    return 0;
}
