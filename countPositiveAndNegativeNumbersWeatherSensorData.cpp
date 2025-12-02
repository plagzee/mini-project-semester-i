/*
Problem 2: Count Positive and Negative Numbers (Weather Sensor Data)
🧩 Problem Story:

A weather station records temperature readings during the day.
Positive readings mean above 0°C, negative readings mean below 0°C, and zero means exactly 0°C.

Your job is to analyze the data and find how many readings are positive, negative, and zero.

Input Format:

The first line contains an integer n — the number of readings.

The second line contains n space-separated integers representing the readings.

🖥️ Output Format:

Print three lines as shown:
Positive = x
Negative = y
Zero = z

Example 1:

Input
6
3 -2 0 7 -5 8

Output
Positive = 3
Negative = 2
Zero = 1
*/


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