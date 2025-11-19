#include <iostream>
using namespace std;

class Sample {
public:
    int *arr;

    Sample(int a, int b, int c) {
        arr = new int[3];
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
    }

    // Shallow Copy
    Sample(const Sample &s) {
        arr = s.arr;
    }
};

int main() {
    Sample s1(1, 2, 3);
    Sample s2 = s1;

    s2.arr[1] = 99;   // change to s2 affects s1 also

    cout << s1.arr[1] << endl;    // Output: 99
    return 0;
}
