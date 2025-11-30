#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {

    std::string secret_word;

    std::cout << "Enter a word: ";
    std::cin >> secret_word;

    if (isPalindrome(secret_word))
        std::cout << "Perfect Secret Word" << std::endl;
    else
        std::cout << "Not Secret Word" << std::endl;

    return 0;
}