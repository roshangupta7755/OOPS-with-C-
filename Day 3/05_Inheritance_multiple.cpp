#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollno;
};

class Teacher {
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher {
public:
    string researchArea;

    void getInfo() {
        cout << "Name          : " << name << endl;
        cout << "Roll No       : " << rollno << endl;
        cout << "Subject       : " << subject << endl;
        cout << "Salary        : " << salary << endl;
        cout << "Research Area : " << researchArea << endl;
    }
};

int main() {

    TA t1;
    t1.name = "tony stark";        
    t1.rollno = 101;
    t1.subject = "engineering";    
    t1.salary = 50000;
    t1.researchArea = "AI Robotics";

    t1.getInfo();    

    return 0;
}
