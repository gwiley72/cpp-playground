#include "stdafx.h"

#include "Person.h"

int main()
{
	using namespace std;

	// member fields and functions
	Person p(30, "Jane", Person::female);

	Person *p2 = new Person(6, "Brennan Wiley", Person::male);

	p2->greet();

	// const and static members
	p.gender = Person::male;
	int le = Person::getLifeExpectancy();
	cout << le << endl;

	// cleanup code
	delete p2;

	getchar();
	return 0;
}

