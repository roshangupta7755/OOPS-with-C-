#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

// Derived Class (Person → Student)
class Student : public Person {
public:
    int rollno;

    Student(string name, int age, int rollno)
        : Person(name, age) {
        this->rollno = rollno;
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "age  : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};

// Derived Class (Student → GradStudent)
class GradStudent : public Student {
public:
    string researchArea;

    GradStudent(string name, int age, int rollno, string researchArea)
        : Student(name, age, rollno) {
        this->researchArea = researchArea;
    }

    void getGradInfo() {
        cout << "name : " << name << endl;
        cout << "age  : " << age << endl;
        cout << "rollno : " << rollno << endl;
        cout << "research area : " << researchArea << endl;
    }
};

int main() {

    // Student object
    Student s1("rahul kumar", 21, 1234);
    s1.getInfo();

    cout << "-----------------------------" << endl;

    // GradStudent object
    GradStudent g1("Anita Verma", 25, 9999, "Machine Learning");
    g1.getGradInfo();

    return 0;
}
