#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
	double salary;

public:
	// properties / attributes
	string name;
	string dept;
	string subject;

public:
	// methods / member functions
	void changeDept(string newDept)
	{
		dept = newDept;
	}

	// setter
	void setSalary(double s)
	{
		salary = s;
	}
	// getter
	double getSalary()
	{
		return salary;
	}
};

int main()
{
	Teacher t1;
	t1.name = "Roshan ";
	t1.subject = "C++";
	t1.dept = "Computer Science";
	t1.setSalary(25600);
	cout << t1.name << endl;
	cout<< t1.getSalary() << endl;
	return 0;
}
