#pragma once
#include <string>
#include "Person.hpp"

using namespace std;

enum ClassLevel
{
	None,
	Freshman,
	Sophomore,
	Junior,
	Senior
};

class Student : public Person
{
	ClassLevel classLevel;

public:
	Student() : Person::Person()
	{
		classLevel = None;
	}
	Student(string name,
		string address,
		string phone,
		string email) : Person::Person(
			name,
			address,
			phone,
			email)
	{
		classLevel = None;
	};
	void setClassLevel();
	ClassLevel getClassLevel();
	string displayClassLevel();

};