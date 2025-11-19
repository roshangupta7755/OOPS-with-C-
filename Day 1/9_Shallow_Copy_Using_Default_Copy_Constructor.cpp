#include <iostream>
using namespace std;

class Box {
public:
    int *size;

    Box(int s) {
        size = new int(s);
    }
    // default copy constructor → shallow copy
};

int main() {
    Box b1(10);
    Box b2 = b1;  // shallow copy by default

    *b2.size = 50;

    cout << *b1.size;  // Output: 50
    return 0;
}
