#include <iostream>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << "int : " << x << endl;
    }

    void show(double y) {
        cout << "double : " << y << endl;
    }

    void show(string s) {
        cout << "string : " << s << endl;
    }
};

int main() {
    Print p;
    p.show(10);
    p.show(5.99);
    p.show("Roshan");
    return 0;
}
