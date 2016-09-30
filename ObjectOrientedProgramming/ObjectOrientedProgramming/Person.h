#pragma once
class Person
{
	static int lifeExpectancy;
public:
	const static int female = 0;
	const static int male = 1;

	int age;
	string name;
	int gender;
	Address *address;

	Person(int age, string name, int gender);

	Person(int age, string name, int gender,
		int house_number, string street_name, 
			string city);

	void greet() const;

	static int getLifeExpectancy();
};

