#include <iostream>
#include <fstream>
#include <string>

void countLinesNotStartingWithA() {
    std::ifstream file("STORY.TXT");
    std::string line;
    int count = 0;

    if (file.is_open()) {
        while (getline(file, line)) {
            if (!line.empty() && line[0] != 'A') {
                count++;
            }
        }
        std::cout << "Lines not starting with 'A': " << count << std::endl;
        file.close();
    } else {
        std::cerr << "Could not open STORY.TXT" << std::endl;
    }
}
