/*
Problem Title: Shopkeeper Ramesh’s Profit Tracker 💰
🧩 Story:

Ramesh owns a small grocery shop in his town.
He keeps a record of his daily profit or loss for a week in an array.

If the value is positive, it means he made a profit that day.

If the value is negative, it means he had a loss that day.

At the end of the week, Ramesh wants to know:

His total profit (sum of all positive values)

His total loss (sum of all negative values, as a positive number)

His net balance (profit + loss, considering signs)

Help Ramesh write a program to calculate these values.

Problem Statement:

Given an array records[] of size n, where each element represents the daily profit or loss,
find and print the total profit, total loss, and net balance.

Input Format:

The first line contains an integer n — number of days.

The second line contains n space-separated integers representing profit or loss on each day.

Output Format:

Print three lines:

Total Profit: X
Total Loss: Y
Net Balance: Z


Where:

X → sum of all positive numbers

Y → sum of all negative numbers converted to positive value

Z → X − Y
*/

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