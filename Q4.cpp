#include <iostream>
using namespace std;

// Swap two numbers using references
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Find minimum and maximum
void minMax(int arr[], int size, int &mn, int &mx) {
    mn = arr[0];
    mx = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < mn) {
            mn = arr[i];
        }

        if (arr[i] > mx) {
            mx = arr[i];
        }
    }
}

int main() {
    int x = 10, y = 20;

    cout << "Before swap: " << x << " " << y << endl;

    swap(x, y);

    cout << "After swap: " << x << " " << y << endl;

    int arr[5] = {12, 5, 30, 8, 2};
    int mn, mx;

    minMax(arr, 5, mn, mx);

    cout << "Minimum = " << mn << endl;
    cout << "Maximum = " << mx << endl;

    return 0;
}