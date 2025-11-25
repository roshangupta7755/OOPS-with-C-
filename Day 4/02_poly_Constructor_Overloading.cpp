#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    Demo() {
        x = 0;
        cout << "Default Constructor\n";
    }

    Demo(int a) {
        x = a;
        cout << "Parameterized Constructor: " << x << endl;
    }

    Demo(int a, int b) {
        x = a + b;
        cout << "Two-Parameter Constructor Sum: " << x << endl;
    }
};

int main() {
    Demo d1;
    Demo d2(10);
    Demo d3(5, 15);
    return 0;
}
