#include <iostream>
#include <string>

using namespace std;

//Person.hpp
class Person
{
protected:
	string name;
	string address;
	string phone;
	string email;

public:
	Person();
	Person(string name, string address, string phone, string email);

	void setName(string name);
	void setAddress(string address);
	void setPhone(string phone);
	void setEmail(string email);

	string getName();
	string getAddress();
	string getPhone();
	string getEmail();
	void outputPerson();
};

//Person.cpp
void Person::setName(string name) { name = name; };
void Person::setAddress(string address) { address = address; };
void Person::setPhone(string phone) { phone = phone; };
void Person::setEmail(string email) { email = email; };

string Person::getName() { return name; };
string Person::getAddress() { return address; };
string Person::getPhone() { return phone; };
string Person::getEmail() { return email; };
void Person::outputPerson()
{
	cout << name << endl;
	cout << address << endl;
	cout << email << ", " << phone << endl;

};

Person::Person()
{
	name = "";
	address = "";
	phone = "";
	email = "";
};

Person::Person(
	string name,
	string address,
	string phone,
	string email)
{
	this->name = name;
	this->address = address;
	this->phone = phone;
	this->email = email;
};

//Student.hpp
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
	Student(ClassLevel classLevel, 
		string name,
		string address,
		string phone,
		string email) : Person::Person(
			name,
			address,
			phone,
			email)
	{
		this->classLevel = classLevel;
	};
	void setClassLevel();
	ClassLevel getClassLevel();
	void displayClassLevel();

};

//Student.cpp
void Student::displayClassLevel()
{
	if (classLevel == Freshman) cout << "Freshman" << endl;
	else if (classLevel == Sophomore) cout << "Sophomore" << endl;
	else if (classLevel == Junior) cout << "Junior" << endl;
	else if (classLevel == Senior) cout << "Senior" << endl;
};
void Student::setClassLevel() { classLevel = classLevel; };
ClassLevel Student::getClassLevel() { return classLevel; };

//Employee.hpp
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
	Employee(int officeNumber,
		int salary,
		string name,
		string address,
		string phone,
		string email) : Person::Person(
			name,
			address,
			phone,
			email)
	{
		this->officeNumber = officeNumber;
		this->salary = salary;
	};
	void setOfficeNumber();
	void setSalary();
	int getOfficeNumber();
	int getSalary();
	void displayData();

};

//Employee.cpp
void Employee::setOfficeNumber() { officeNumber = officeNumber; };
void Employee::setSalary() { salary = salary; };
void Employee::displayData()
{
	cout << officeNumber << endl;
	cout << salary << endl;
};

int Employee::getSalary() { return salary; };
int Employee::getOfficeNumber() { return officeNumber; };

//Faculty.hpp
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
	Faculty(string officeHours,
		int rank, 
		string className, 
		int officeNumber, 
		int salary, 
		string name,
		string address,
		string phone,
		string email) : Employee::Employee(officeNumber,
			salary,
			name,
			address,
			phone,
			email)
	{
		this->officeHours = officeHours;
		this->rank = rank;
		this->className = className;
	};
	void setOfficeHours();
	void setRank();
	void setClassName();
	string getOfficeHours();
	int getRank();
	string getClassName();
	void displayData();
	void DisplayNameandClassName();

};

//Faculty.cpp
void Faculty::setOfficeHours() { officeHours = officeHours; };
void Faculty::setRank() { rank = rank; };
void Faculty::setClassName() { className = className; };
void Faculty::displayData()
{
	cout << officeHours << endl;
	cout << rank << endl;
};

string Faculty::getOfficeHours() { return officeHours; };
int Faculty::getRank() { return rank; };
string Faculty::getClassName() { return className; };

void Faculty::DisplayNameandClassName()
{
	cout << className;
	cout << name;
};

//Staff.hpp
class Staff : public Employee
{
	string title;

public:
	Staff() : Employee::Employee()
	{
		title = "";
	}
	Staff(string title,
		int officeNumber, 
		int salary,
		string name,
		string address,
		string phone,
		string email) : Employee::Employee(officeNumber, 
			salary,
			name,
			address,
			phone,
			email)
	{
		this->title = title;
	};
	void setTitle();
	string getTitle();
	void DisplayTitle();
};

//Staff.cpp
void Staff::setTitle() { title = title; };
string Staff::getTitle() { return title; };

void Staff::DisplayTitle()
{
	cout << title << endl;
};








int  main()
{
	Person personOne{ "Sam Sung", "1010 Easy St", "666-666-6666", "SamSung@apple.com" };
	personOne.outputPerson();

	Student studentOne{ Junior, "Blinky Britches", "9000 Over St.", "000-010-0000", "me@hotmale.com" };
	studentOne.outputPerson();
	studentOne.displayClassLevel();

	Employee employeeOne{ 200004, 1, "Andy Freeze", "666 Hell Rd", "1-800-Ghost-Busters", "DefNotFBI@USA.gov" };
	employeeOne.outputPerson();
	employeeOne.displayData();

	Faculty facultyOne{ "1am-4am Mon, every second Saturday during the full moon", 200, "Biology of Wolves", 2, 300000001, "Jenny Dover", "1313 Deadend Dr", "100-867-5309", "IWannaRuinOurFriendship@StudioKillers.org" };
	facultyOne.outputPerson();
	facultyOne.displayData();

	Staff staffOne{ "Junior Janitor, but secretly a superhero", 3000000, 250, "Percy Perkins", "2000 block of DefinitelyNOTASuperheroBase Ave", "200-200-2000", "definitelyDoesn'tHaveDaddyIssues@secretSuperHero.gov" };
	staffOne.outputPerson();
	staffOne.displayData();
}