#include <iostream>
using namespace std;

int main() {
    int numbers[8];

    cout << "Enter 8 numbers:" << endl;

    for (int i = 0; i < 8; i++) {
        cin >> numbers[i];
    }

    // Bubble Sort
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7 - i; j++) {

            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    cout << "\nSorted numbers: ";

    for (int i = 0; i < 8; i++) {
        cout << numbers[i] << " ";
    }

    // Search for a number
    int search;
    cout << "\nEnter number to search: ";
    cin >> search;

    bool found = false;

    for (int i = 0; i < 8; i++) {
        if (numbers[i] == search) {
            cout << "Number found at position "
                 << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}