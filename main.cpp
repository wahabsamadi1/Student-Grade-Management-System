#include <iostream>
using namespace std;

int main() {
    string studentName;
    double score;

    cout << "Enter student's name: ";
    getline(cin, studentName);

    cout << "Enter student's score (0-100): ";
    cin >> score;

    cout << "Student: " << studentName << endl;

    if (score >= 90) {
        cout << "Grade: A";
    } else if (score >= 80) {
        cout << "Grade: B";
    } else if (score >= 70) {
        cout << "Grade: C";
    } else if (score >= 60) {
        cout << "Grade: D";
    } else {
        cout << "Grade: F";
    }

    return 0;
}
