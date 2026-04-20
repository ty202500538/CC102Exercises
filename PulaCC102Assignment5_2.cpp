#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ofstream outFile;
    outFile.open("original.txt", ios::out);

    if (outFile.is_open()) {
        outFile << "One" << endl;
        outFile << "Two" << endl;
        outFile << "Three" << endl;
        outFile << "Four" << endl;
        outFile << "Five" << endl;
        outFile << "Six" << endl;
        outFile.close();
    } else {
        cout << "Failed to create original.txt" << endl;
        return 1;
    }

    ifstream inFile;
    inFile.open("original.txt", ios::in);
    
    vector<string> lines;
    string line;

    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            lines.push_back(line);
        }
        inFile.close();
    } else {
        cout << "Failed to open original.txt for reading" << endl;
        return 1;
    }

    sort(lines.begin(), lines.end());

    ofstream sortedFile;
    sortedFile.open("sorted.txt", ios::out);

    if (sortedFile.is_open()) {
        for (const string& s : lines) {
            sortedFile << s << endl;
        }
        sortedFile.close();
        cout << "Files processed and sorted successfully!" << endl;
    } else {
        cout << "Failed to create sorted.txt" << endl;
        return 1;
    }

    return 0;
}
