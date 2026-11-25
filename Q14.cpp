#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Sum = " << a + b << endl;
    cout << "Difference = " << a - b << endl;
    cout << "Product = " << a * b << endl;

    if (b != 0) {
        cout << "Integer Division = " << a / b << endl;
        cout << "Decimal Division = "
             << (double)a / b << endl;
        cout << "Remainder = " << a % b << endl;
    }
    else {
        cout << "Cannot divide by zero." << endl;
    }

    if (a % 2 == 0) {
        cout << a << " is even." << endl;
    }
    else {
        cout << a << " is odd." << endl;
    }

    return 0;
}