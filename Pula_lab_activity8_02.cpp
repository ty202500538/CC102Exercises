#include <iostream>
#include <fstream>
#include <cctype>

int main() {
    std::ifstream file("TEXT.TXT");
    char ch;
    int upper = 0, lower = 0;

    if (file.is_open()) {
        while (file.get(ch)) {
            if (isupper(ch)) upper++;
            else if (islower(ch)) lower++;
        }
        std::cout << "Uppercase: " << upper << "\nLowercase: " << lower << std::endl;
        file.close();
    }
    return 0;
}
