#include <iostream>
#include <fstream>
#include <map>

int main() {
    std::ifstream file("TEXT.TXT");
    std::map<char, int> freq;
    char ch;

    if (file.is_open()) {
        while (file.get(ch)) {
            freq[ch]++;
        }
        for (auto const& [character, count] : freq) {
            std::cout << "'" << character << "': " << count << std::endl;
        }
        file.close();
    }
    return 0;
}
