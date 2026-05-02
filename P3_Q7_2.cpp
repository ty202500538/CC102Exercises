#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool isEvenSquare(int num) {
    if (num < 0 || num % 2 != 0) return false;
    int root = sqrt(num);
    return (root * root == num);
     } 

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    int num;

    while (inFile >> num) {
        if (isEvenSquare(num)) {
            outFile << num << endl;
        }
       }

    inFile.close();
    outFile.close();
    return 0;
}
