
#include <iostream>
using namespace std;

int main()
{
    // Declaring variables and assigning values
    int age = 20;
    float temperature = 35.5;
    double voltage = 230.75;
    char grade = 'A';
    bool powerStatus = true;

    // Printing variable values
    cout << "===== VARIABLES AND DATA TYPES =====" << endl;

    cout << "Integer: " << age << endl;
    cout << "Float: " << temperature << endl;
    cout << "Double: " << voltage << endl;
    cout << "Character: " << grade << endl;
    cout << "Boolean: " << boolalpha << powerStatus << endl;

    // Printing sizes in bytes
    cout << "\n===== SIZE IN BYTES =====" << endl;

    cout << "Size of int: " << sizeof(age) << " bytes" << endl;
    cout << "Size of float: " << sizeof(temperature) << " bytes" << endl;
    cout << "Size of double: " << sizeof(voltage) << " bytes" << endl;
    cout << "Size of char: " << sizeof(grade) << " byte" << endl;
    cout << "Size of bool: " << sizeof(powerStatus) << " byte" << endl;

    return 0;
}
