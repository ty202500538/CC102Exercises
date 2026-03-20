#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {
    int studentID;
    string name;
    string course;
    float gpa;
    string standing;
};

Student* input(Student s[], int n);
int display(Student s[], int n);
string getStanding(float gpa);
bool isDuplicate(Student s[], int size, int id);

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student st[n];

    input(st, n);
    display(st, n);

    return 0;
}

Student* input(Student s[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        while (true) {
            cout << "ID: ";
            cin >> s[i].studentID;

            if (isDuplicate(s, i, s[i].studentID)) {
                cout << "ID already exists! Enter another.\n";
            } else {
                break;
            }
        }

        cin.ignore();
        cout << "Name: ";
        getline(cin, s[i].name);

        cout << "Course: ";
        getline(cin, s[i].course);

        cout << "GPA: ";
        cin >> s[i].gpa;

        s[i].standing = getStanding(s[i].gpa);
    }
    return s;
}

int display(Student s[], int n) {
    cout << "\n\nSTUDENT RECORDS\n";
    cout << left << setw(10) << "ID"
         << setw(20) << "Name"
         << setw(15) << "Course"
         << setw(8) << "GPA"
         << setw(12) << "Standing" << endl;

    cout << "--------------------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << left << setw(10) << s[i].studentID
             << setw(20) << s[i].name
             << setw(15) << s[i].course
             << setw(8) << s[i].gpa
             << setw(12) << s[i].standing << endl;
    }

    return 0;
}

string getStanding(float gpa) {
    if (gpa >= 90 && gpa <= 100) return "Excellent";
    else if (gpa >= 80) return "Very Good";
    else if (gpa >= 70) return "Good";
    else if (gpa >= 60) return "Passing";
    else return "Failed";
}

bool isDuplicate(Student s[], int size, int id) {
    for (int i = 0; i < size; i++) {
        if (s[i].studentID == id) {
            return true;
        }
    }
    return false;
}
