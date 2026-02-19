#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char choice;

    do {
        int students, quizzes;

        cout << "Enter number of students: ";
        cin >> students;

        cout << "\nEnter number of quizzes: ";
        cin >> quizzes;

        double score[50][50];   // fixed size (student style)
        double avg[50];

        // INPUT SCORES
        for (int i = 0; i < students; i++) {
            double sum = 0;
            cout << "\nStudent " << i + 1 << " scores:\n";

            for (int j = 0; j < quizzes; j++) {
                cin >> score[i][j];
                sum += score[i][j];
            }

            avg[i] = sum / quizzes;
        }

        // DISPLAY TABLE
        cout << "\nStudent";
        for (int j = 0; j < quizzes; j++) {
            cout << setw(8) << "Q" << j + 1;
        }
        cout << setw(10) << "Average\n";

        for (int i = 0; i < students; i++) {
            cout << i + 1;

            for (int j = 0; j < quizzes; j++) {
                cout << setw(8) << score[i][j];
            }

            cout << setw(10) << fixed << setprecision(2) << avg[i] << endl;
        }

        cout << "\nRun again? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' ||choice == 'N');

    return 0;
}
