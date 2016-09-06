#include <iostream>
#include <cassert>
#include "../StaticLib/foo.h"
#include "../DynamicLib/DynamicLib.h"
using namespace std;

#include "foo.h"

int main()
{
	cout << "2+3=" << add(2, 3) << endl;

	cout << "2*3=" << multiply(2, 3) << endl;

	cout << "Hello, C++" << endl;

	getchar();

	return 0;
}