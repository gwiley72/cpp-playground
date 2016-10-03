#include "stdafx.h"

class Address
{
public:
	string city;

	Address(string const& city) : city(city)
	{
		cout << "Address created" << endl;
	}

	~Address()
	{
		cout << "Address destroyed" << endl;
	}
};

class Person
{
public: 
	Address *address;

	Person(string const& city)
	{
		address = new Address(city);
		cout << "Person created" << endl;
	}

	~Person()
	{
		delete address;
		cout << "Person destroyed" << endl;
	}
};

class Person2
{
	Person2() {}
	Person2(const Person2& _){}
	~Person2() {}

	int ref_count;
public:
	static Person2* create()
	{
		auto* p = new Person2;
		p->ref_count = 1;
		return p;
	}
	void add_ref() { ref_count++; }
	void release()
	{
		if (--ref_count == 0)
			delete this;
	}
};

void inc(int& x) {	x++; }

void move_rvalue()
{
	int a = 0;
	inc(a);
	
}

int main(int argc, char* argv[])
{
	move_rvalue();
	//Address* a;

	//{
	//	Person p("New York");
	//	a = p.address;
	//}

	//cout << a->city << endl;

	getchar();
	return 0;
}

