#include <string>
#include <iostream>
#include "Person.hpp"

using namespace std;


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
