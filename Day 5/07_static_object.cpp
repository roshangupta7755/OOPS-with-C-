#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Object created\n";
    }
};

void fun() {
    static Test t;      // static object
}

int main() {
    fun();
    fun();
    fun();
    return 0;
}
