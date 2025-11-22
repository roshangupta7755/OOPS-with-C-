#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    // Parameterized Constructor
    Student(int r) {
        roll = r;
    }
};

int main() {
    Student s1(10);
    Student s2(20);

    cout << s1.roll << " " << s2.roll;
    return 0;
}
