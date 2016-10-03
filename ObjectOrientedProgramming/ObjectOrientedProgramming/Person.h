#pragma once

class Person
{
private:
	static int lifeExpectancy;
protected:
	int ssn;
public:
	// const is not static by default
	const static int female = 0;
	const static int male = 1;

	int age;
	string name;
	int gender;
	Address *address;

	// only for ctors/dtors section
	Person(int age, string name, int gender);

	Person(int age, string name, int gender,
		int house_number, string street_name, 
			string city);

	virtual ~Person();

	// copy ctor/assign
	Person(const Person& p);

	// make virtual later on
	virtual void greet() const;

	static int getLifeExpectancy();
};

