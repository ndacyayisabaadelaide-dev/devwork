#include <iostream>
using namespace std;

enum Status {
    OK,
    WARNING,
    ERROR
};

struct Reading {
    int id;
    float temperature;
    float humidity;
    Status status;
};

int main() {
    Reading readings[5];

    // Input readings
    for (int i = 0; i < 5; i++) {
        cout << "\nReading " << i + 1 << endl;

        readings[i].id = i + 1;

        cout << "Enter temperature: ";
        cin >> readings[i].temperature;

        cout << "Enter humidity: ";
        cin >> readings[i].humidity;

        // Set status
        if (readings[i].temperature > 40) {
            readings[i].status = ERROR;
        }
        else if (readings[i].temperature > 30) {
            readings[i].status = WARNING;
        }
        else {
            readings[i].status = OK;
        }
    }

    // Print report
    cout << "\n===== SENSOR REPORT =====" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "\nID: " << readings[i].id;
        cout << "\nTemperature: " << readings[i].temperature;
        cout << "\nHumidity: " << readings[i].humidity;

        cout << "\nStatus: ";

        switch (readings[i].status) {
            case OK:
                cout << "OK";
                break;

            case WARNING:
                cout << "WARNING";
                break;

            case ERROR:
                cout << "ERROR";
                break;
        }

        cout << endl;
    }

    return 0;
}