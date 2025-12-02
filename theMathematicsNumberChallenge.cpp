/*
Question 1: The Mathematician’s Number Challenge

Problem Story:
Riya, a young mathematician, loves playing with numbers. One day, she picks a number and wants to check two things:

Whether the number is prime or not.

Whether it is even or odd.
She wants your help to write a program that tells her both answers.
Task:
Write a program that takes an integer as input and:

Checks if it is a prime number or not.

Checks whether it is even or odd.

Input Format:
The first line contains one integer — the number to check.

Output Format:
Print two lines:
First line: "Prime Number" or "Not Prime"
Second line: "Even Number" or "Odd Number"


Example 1:
Input: 7
Output:
Prime Number
Odd Number

Example 2:
Input: 10
Output:
Not Prime
Even Number
*/


#include <iostream>

int main()
{
    int n, i, count;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    bool isEven = (n % 2 == 0);
    bool isPrime;

    // ------------------------
    
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
        else {
            continue;
        }
    }

    if (count <= 2)
        isPrime = true;
    else
        isPrime = false;

    // ------------------------


    if (isPrime) {
        std::cout << "Prime Number\n";
    } else {
        std::cout << "Not Prime\n";
    }

    if (isEven)
        std::cout << "Even Number" << std::endl;
    else 
        std::cout << "Odd Number" << std::endl;

    return 0;
}