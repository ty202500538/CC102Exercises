#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile;
    outFile.open("color.txt", ios::out);

    if (outFile.is_open()) {
        outFile << "Red" << endl;
        outFile << "Blue" << endl;
        outFile << "Green" << endl;
        outFile << "Yellow" << endl;
        outFile << "Purple" << endl;
        
        outFile.close();
        cout << "color.txt created successfully!" << endl;
    } else {
        cout << "Failed to create color.txt" << endl;
        return 1;
    }

    ifstream srcFile;
    ofstream destFile;

    srcFile.open("color.txt", ios::in);
    destFile.open("color_copy.txt", ios::out);

    if (srcFile.is_open() && destFile.is_open()) {
        string line;
        
        while (getline(srcFile, line)) {
            destFile << line << endl;
        }

        srcFile.close();
        destFile.close();
        cout << "Copy process completed: color_copy.txt generated." << endl;
    } else {
        cout << "Error opening files for copy process." << endl;
    }

    return 0;
}
