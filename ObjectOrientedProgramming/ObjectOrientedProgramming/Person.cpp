#include "stdafx.h"
#include "Address.h"
#include "Person.h"

Person::Person(int age, string name, int gender)
	: age(age), name(name), gender(gender)
{
	address = nullptr;
}

Person::Person(int age, string name, int gender, 
	int house_number, string street_name, 
		string city)
	: Person(age, name, gender)
{
	if (address != nullptr)
		delete address;

	address = new Address(house_number, street_name, city);
}

void Person::greet() const
{
	cout << "My name is " <<
		this->name << " and I am " <<
		this->age << " years old." <<
		endl;
}

int Person::getLifeExpectancy()
{
	return lifeExpectancy;
}

int Person::lifeExpectancy = 80;