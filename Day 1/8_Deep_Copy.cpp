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

    // Deep Copy
    Sample(const Sample &s) {
        arr = new int[3];
        for(int i = 0; i < 3; i++)
            arr[i] = s.arr[i];
    }
};

int main() {
    Sample s1(1, 2, 3);
    Sample s2 = s1;

    s2.arr[1] = 99;   // change affects only s2

    cout << s1.arr[1] << endl;   // Output: 2
    cout << s2.arr[1] << endl;   // Output: 99
    return 0;
}
