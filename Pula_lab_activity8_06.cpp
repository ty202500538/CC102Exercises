#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

bool isPalindrome(std::string str) {
    std::string rev = str;
    std::reverse(rev.begin(), rev.end());
    return str == rev;
}

int countPalindromes() {
    std::ifstream file("WORDS.TXT");
    std::string word;
    int count = 0;

    if (file.is_open()) {
        while (file >> word) {
            if (isPalindrome(word)) {
                count++;
            }
        }
        file.close();
    }
    return count;
}
