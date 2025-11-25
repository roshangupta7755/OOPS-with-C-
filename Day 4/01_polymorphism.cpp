#include <iostream>
using namespace std;

class Demo {
public:
    void show(int a) {
        cout << "show(int) : " << a << endl;
    }

    void show(double b) {
        cout << "show(double) : " << b << endl;
    }
};

int main() {
    Demo d1;     
    d1.show(5);       
    d1.show(3.14);    
    return 0;
}
