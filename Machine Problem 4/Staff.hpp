#pragma once
#include <string>
#include "Employee.hpp"

using namespace std;

class Staff : public Employee
{
	string title;

public:
	Staff() : Employee::Employee()
	{
		title = "";
	}
	Staff (int officeNumber, int salary) : Employee::Employee(officeNumber, salary)
	{
		title = "";
	};
	void setTitle();
	string getTitle();
	void DisplayTitle();
};