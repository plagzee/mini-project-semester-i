/*
HOSTEL ATTENDANCE TRACKER 
Assam Down Town University maintains a strict hostel monitoring system to ensure student safety.
Every hostel student must mark attendance daily.
The warden keeps attendance for 7 days (Monday to Sunday) for 10 students.

The attendance is stored in a 2D array A[10][7], where:
A[i][j] = 1 → Student i was Present on Day j

A[i][j] = 0 → Student i was Absent on Day j

Here:

i = Student number (1 to 10)

j = Day number (1 to 7)

The warden wants a weekly summary of attendance.

Your Task: Write the algorithm or C program to do the following:
(a) Calculate and print the total number of days each student was present.

Total present days = sum of each row.

(b) Identify the student who has the highest attendance in the week.

If two students have the same highest attendance, print the one with the lower student number.

Find the day (1–7) on which overall hostel attendance was the lowest.

Total attendance on a day = sum of each column.
Input :
1 1 0 1 1 0 1
1 0 1 1 1 1 1
0 1 1 0 1 1 0
1 1 1 1 0 1 1
1 0 1 0 1 0 1
0 0 1 1 1 1 1
1 1 0 0 0 1 1
1 1 1 1 1 0 0
0 1 1 1 1 1 1
1 0 0 1 1 1 1

Output:
Weekly Attendance Summary
-------------------------

Total Present Days:
Student 1: 5
Student 2: 6
Student 3: 4
Student 4: 6
Student 5: 4
Student 6: 5
Student 7: 5
Student 8: 5
Student 9: 6
Student 10: 5

Student with Highest Attendance: Student 2 (6 Days)

Day with Lowest Overall Attendance: Day 2
*/

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
