#include <iostream>
using namespace std;

class Person
{
public:
	string name;
	int age;

	Person()
	{
		cout << "parent constructor..\n";
	}
};

class Student : public Person
{
public:
	int rollno;
	Student()
	{
		cout << "child constructor..\n";
	}

	void getInfo()
	{
		cout << "name : " << name << endl;
		cout << "age  : " << age << endl;
		cout << "rollno : " << rollno << endl;
	}
};

int main()
{
	Student s1;
	s1.name = "rahul kumar";
	s1.age = 21;
	s1.rollno = 123;

	s1.getInfo();

	return 0;
}
