#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    cout << "Enter your score: ";
    cin >> score;

    // Using IF / ELSE
    cout << "\nUsing IF / ELSE:" << endl;

    if (score < 0 || score > 100) {
        cout << "Invalid score" << endl;
    }
    else if (score >= 90) {
        cout << "Grade A" << endl;
    }
    else if (score >= 80) {
        cout << "Grade B" << endl;
    }
    else if (score >= 70) {
        cout << "Grade C" << endl;
    }
    else if (score >= 60) {
        cout << "Grade D" << endl;
    }
    else {
        cout << "Grade F" << endl;
    }

    // Using SWITCH
    cout << "\nUsing SWITCH:" << endl;

    if (score < 0 || score > 100) {
        cout << "Invalid score" << endl;
    }
    else {
        switch (score / 10) {
            case 10:
            case 9:
                grade = 'A';
                break;

            case 8:
                grade = 'B';
                break;

            case 7:
                grade = 'C';
                break;

            case 6:
                grade = 'D';
                break;

            default:
                grade = 'F';
        }

        cout << "Grade " << grade << endl;
    }

    return 0;
}