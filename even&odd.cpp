
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    // Read two integers
    cout << "Enter first integer (a): ";
    cin >> a;

    cout << "Enter second integer (b): ";
    cin >> b;

    // Arithmetic operations
    cout << "\n===== ARITHMETIC OPERATIONS =====" << endl;

    cout << "Sum: " << a + b << endl;

    cout << "Difference: " << a - b << endl;

    cout << "Product: " << a * b << endl;

    // Integer division
    if (b != 0)
    {
        cout << "Integer Division: " << a / b << endl;

        // Decimal division
        cout << "Decimal Division: "
             << (double)a / b << endl;

        // Remainder
        cout << "Remainder: " << a % b << endl;
    }
    else
    {
        cout << "Division by zero is not allowed!" << endl;
    }

    // Check whether a is even or odd
    cout << "\n===== EVEN OR ODD CHECK =====" << endl;

    if (a % 2 == 0)
    {
        cout << a << " is an EVEN number." << endl;
    }
    else
    {
        cout << a << " is an ODD number." << endl;
    }

    return 0;
}
