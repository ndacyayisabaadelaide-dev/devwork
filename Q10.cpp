#include <iostream>
#include <vector>
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

    vector<float> numbers(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];

        sum += numbers[i];
    }

    float average = sum / numbers.size();

    cout << "Average = " << average << endl;

    return 0;
}