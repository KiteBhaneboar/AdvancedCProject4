#pragma once
#include <string>
#include "Person.hpp"

using namespace std;

class Employee : public Person
{
	int officeNumber;
	int salary;

public:
	Employee() : Person::Person()
	{
		officeNumber = 0;
		salary = 0;
	}
	Employee(string name,
		string address,
		string phone,
		string email) : Person::Person(
			name,
			address,
			phone,
			email)
	{
		officeNumber = 0;
		salary = 0;
	};
	void setOfficeNumber();
	void setSalary();
	int getOfficeNumber();
	int getSalary();
	string displayData();

};