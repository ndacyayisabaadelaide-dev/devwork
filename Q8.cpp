#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class Sensor {
public:
    virtual float read() = 0;

    virtual string getName() = 0;

    virtual ~Sensor() {}
};

// Temperature sensor
class TemperatureSensor : public Sensor {
public:
    float read() override {
        return 28.5;
    }

    string getName() override {
        return "Temperature Sensor";
    }
};

// Light sensor
class LightSensor : public Sensor {
public:
    float read() override {
        return 750;
    }

    string getName() override {
        return "Light Sensor";
    }
};

int main() {
    TemperatureSensor temperature;
    LightSensor light;

    // Array of base-class pointers
    Sensor* sensors[2];

    sensors[0] = &temperature;
    sensors[1] = &light;

    // Read both sensors in one loop
    for (int i = 0; i < 2; i++) {
        cout << sensors[i]->getName() << endl;

        cout << "Reading: "
             << sensors[i]->read() << endl;
    }

    return 0;
}