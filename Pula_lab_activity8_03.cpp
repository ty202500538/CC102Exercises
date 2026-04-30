#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("WORDS.TXT");
    std::string word, longest = "";

    if (file.is_open()) {
        while (file >> word) {
            if (word.length() > longest.length()) {
                longest = word;
            }
        }
        std::cout << "Longest word: " << longest << std::endl;
        file.close();
    }
    return 0;
}
