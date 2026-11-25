#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int diagonalSum = 0;

    // Read matrix
    cout << "Enter 9 numbers for the matrix:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Print matrix
    cout << "\nMatrix:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Sum of each row
    cout << "\nSum of each row:" << endl;

    for (int i = 0; i < 3; i++) {
        int sum = 0;

        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }

        cout << "Row " << i + 1
             << " = " << sum << endl;
    }

    // Main diagonal sum
    for (int i = 0; i < 3; i++) {
        diagonalSum += matrix[i][i];
    }

    cout << "\nMain diagonal sum = "
         << diagonalSum << endl;

    // Transpose
    cout << "\nTranspose:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}