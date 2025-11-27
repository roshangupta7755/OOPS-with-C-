#include <iostream>
using namespace std;

class Car {
private:
    int speed;        // internal detail (hidden)
    void checkEngine() {   // hidden function
        cout << "Engine check OK\n";
    }

public:
    Car() {
        speed = 0;
    }

    void start() {    // exposed behaviour
        checkEngine(); 
        cout << "Car started!" << endl;
    }

    void accelerate(int value) {
        speed += value;
        cout << "Speed increased to: " << speed << endl;
    }
};

int main() {
    Car c1;

    c1.start();        // user sees only "start", not engine checking
    c1.accelerate(20);

    return 0;
}
