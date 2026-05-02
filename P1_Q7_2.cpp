#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    int num;

    while (inFile >> num) {
        if (isPrime(num) && num % 2 != 0) {
            outFile << num << endl;
        }
    }

    inFile.close();
    outFile.close();
    return 0;
}
