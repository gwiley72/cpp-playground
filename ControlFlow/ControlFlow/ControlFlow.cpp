#include "stdafx.h"

using namespace std;

void iteration()
{
	int a[]{ 1,2,3,4 };
	for (int i = 0; i < 4; ++i)
	{
		cout << a[i] << "\t";
	}
	cout << endl;

	for (int *p = a, *e = a + 4; p != e; ++p)
	{
		cout << *p << "\t";
	}
	cout << endl;

	auto ba = begin(a);
	auto ea = end(a);
	for (; ba != ea; ba++)
	{
		cout << *ba << "\t";
	}
	cout << endl;

	for (auto value : a)
	{
		cout << value << "\t";
	}
	cout << endl;

	vector<int> v{ 5,6,7,8 };
	auto bv = v.begin();

	auto cbv = v.cbegin();
	// *cbv = 3; won't work

	for (auto i = v.rbegin(); i != v.rend(); ++i)
	{
		cout << *i << "\t";
	}
	cout << endl;
}

void switching()
{
	int i = 0;

	switch (i)
	{
	case 0:
		cout << "hello" << endl;
		break;
	case 1:
		cout << "world" << endl;
		break;
	default:
		cout << "!" << endl;
	}
}

int main(int argc, char* argv[])
{
	char *s = "Declan";

	while (*s)
	{
		putchar(*s);
		s++;
	}

	int *p = nullptr;
	if (p)
	{
		
	}

	getchar();
	return 0;
}

