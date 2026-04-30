#include <iostream>
#include <fstream>
#include <string>
#include <set>

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");
    std::set<std::string> uniqueWords;
    std::string word;

    if (inputFile.is_open() && outputFile.is_open()) {
        while (inputFile >> word) {
            if (uniqueWords.find(word) == uniqueWords.end()) {
                uniqueWords.insert(word);
                outputFile << word << " ";
            }
        }
        inputFile.close();
        outputFile.close();
    }
    return 0;
}
