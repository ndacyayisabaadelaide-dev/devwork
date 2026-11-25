#include <iostream>
using namespace std;

int main() {
    int age = 24;
    float height = 1.65;
    double salary = 250000.50;
    char grade = 'A';
    bool isStudent = true;

    cout << "Integer: " << age << endl;
    cout << "Size: " << sizeof(age) << " bytes" << endl;

    cout << "Float: " << height << endl;
    cout << "Size: " << sizeof(height) << " bytes" << endl;

    cout << "Double: " << salary << endl;
    cout << "Size: " << sizeof(salary) << " bytes" << endl;

    cout << "Character: " << grade << endl;
    cout << "Size: " << sizeof(grade) << " bytes" << endl;

    cout << "Boolean: " << isStudent << endl;
    cout << "Size: " << sizeof(isStudent) << " bytes" << endl;

    return 0;
}