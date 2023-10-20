#pragma once
#include <string>
#include "Employee.hpp"

using namespace std;

class Faculty : public Employee
{
	string officeHours;
	int rank;
	string className;

public:
	Faculty() : Employee::Employee()
	{
		officeHours = "";
		rank = 0;
	}
	Faculty(int officeNumber, int salary) : Employee::Employee(officeNumber, salary)
	{
		officeHours = "";
		rank = 0;
		className = "";
	};
	void setOfficeHours();
	void setRank();
	void setClassName();
	string getOfficeHours();
	int getRank();
	string getClassName();
	string displayData();
	void DisplayNameandClassName();

};