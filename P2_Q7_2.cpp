#include <iostream>
#include <fstream>

using namespace std;

bool isPerfect(int num){
    if (num<=0) return false;
    int sum=0;
    for (int i=1;i<num;i++){
        if (num%i == 0){
          sum += i;
        }
    }
    return sum == num;
   }

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    int num;

    while (inFile >> num){
        if (isPerfect(num)){
          outFile<<num<<endl;
        }
       }

    inFile.close();
    outFile.close();
    return 0;
}
