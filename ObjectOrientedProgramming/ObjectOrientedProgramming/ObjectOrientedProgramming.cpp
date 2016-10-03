#include "stdafx.h"
#include "Address.h"
#include "Person.h"
#include "Employee.h"

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

	// constructors and destructors
	Person *p3 = new Person(44, "Jack Roberts", Person::male);
	auto* address = new Address(123, "your st.", "st. peters");
	p3->address = address;

	p3->greet();

	// copying
	Person p4(*p3); // shallow, memberwise copy
	p3->address->city = "Exeter";
	cout << p4.address->city << endl;

	Person p5 = *p3;

	// inheritance
	Employee e(33, "Chris", Person::male, "Engineering");

	auto u = [](const Person& p)
	{
		cout << p.name << endl;
	};
	u(e);

	Person &pr = e;
	//Employee& er = static_cast<Employee&> (pr);
	//cout << er.department << endl;

	//Person& pr2 = p;
	//Employee& er2 = static_cast<Employee&>(pr2);
	//cout << er2.department << endl;

	// cleanup code
	delete p2;

	getchar();
	return 0;
}

