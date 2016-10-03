#pragma once
#include "Person.h"

class Employee : public Person
{
private:
	int taxId;
public:
	Employee() : Person(0, "", 0) {}

	// generate this, keep private
	Employee(int age, string const& name, int gender, string department = string())
		: Person(age, name, gender), taxId(0), department(department)
	{
	}

	// generate|overriding members
	string department;
};


