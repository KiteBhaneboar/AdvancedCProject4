#pragma once
#include <string>

using namespace std;

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