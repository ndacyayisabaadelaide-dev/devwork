#include <iostream>
using namespace std;

unsigned char lights = 0;

// Turn on a light
void turnOn(int n) {
    lights = lights | (1 << n);
}

// Turn off a light
void turnOff(int n) {
    lights = lights & ~(1 << n);
}

// Toggle a light
void toggle(int n) {
    lights = lights ^ (1 << n);
}

// Check if a light is ON
bool isOn(int n) {
    return (lights & (1 << n)) != 0;
}

// Print 8-bit binary
void printBinary() {
    for (int i = 7; i >= 0; i--) {
        cout << ((lights >> i) & 1);
    }

    cout << endl;
}

int main() {
    cout << "Initial lights: ";
    printBinary();

    turnOn(0);
    cout << "After turning ON light 0: ";
    printBinary();

    turnOn(3);
    cout << "After turning ON light 3: ";
    printBinary();

    turnOn(7);
    cout << "After turning ON light 7: ";
    printBinary();

    turnOff(3);
    cout << "After turning OFF light 3: ";
    printBinary();

    toggle(0);
    cout << "After toggling light 0: ";
    printBinary();

    cout << "Is light 7 ON? " << isOn(7) << endl;

    return 0;
}