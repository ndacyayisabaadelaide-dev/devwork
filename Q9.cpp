#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0;

    cout << "How many numbers? ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size." << endl;
        return 0;
    }

    // Allocate dynamic memory
    float* numbers = new float[n];

    // Input numbers
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];

        sum += numbers[i];
    }

    // Calculate average
    float average = sum / n;

    cout << "Average = " << average << endl;

    // Free memory
    delete[] numbers;

    numbers = nullptr;

    return 0;
}