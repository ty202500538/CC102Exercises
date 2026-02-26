#include <iostream>
#include <vector>
using namespace std;

int main() {
    char choice;

    do {
        int students, days;
       
        cout << "Enter number of students: \n";
        cin >> students;

        cout << "Enter number of school days: \n";
        cin >> days;

        // Create 2D vector
        vector<vector<int>> attendance(students, vector<int>(days));

       
        for (int i = 0; i < students; i++) {
            cout << "Student " << i + 1 << " attendance: \n";
            for (int j = 0; j < days; j++) {
                cin >> attendance[i][j];
            }
        }
		
	    cout << "\n---------------------------------------------";
        cout << "\nStudent ";
		
        for (int j = 0; j < days; j++) {
            cout << "D" << j + 1 << " ";
        }
		
        cout << "Total Percentage Remarks\n";
		cout << "---------------------------------------------\n";

       
        for (int i = 0; i < students; i++) {
            int total = 0;

            cout << i + 1 << "       ";

            for (int j = 0; j < days; j++) {
                cout << attendance[i][j] << "  ";
                total += attendance[i][j];
            }

          
            double percentage = (double)total / days * 100;

            // Determine remarks
            string remarks;
            if (percentage < 50)
                remarks = "DRP";
            else
                remarks = "OK";

            cout << total << "     ";
            cout << (int)percentage << "%     ";
            cout << remarks << endl;
        }
		
      cout << "---------------------------------------------\n";
        cout << "\nRun again? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}

       
