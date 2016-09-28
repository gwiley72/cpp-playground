#include "stdafx.h"

namespace life
{
	auto meaning = 42;
	auto* pm = &meaning;
	auto& rm = meaning;
}

void functions_and_variables()
{
	using namespace life;
	std::cout << "We like fuzzy pickles." << std::endl;

	std::cout << meaning << " takes up " << 
		sizeof(meaning) << " bytes" << std::endl;

	*pm = 43;

	std::cout << meaning << std::endl;

	rm = 42;

	std::cout << meaning << std::endl;
}

void stack_and_heap()
{
	using namespace std;
	string s("hello");
	string* t = new string("world");

	delete t;

	int* values = new int[128];

	delete[] values;
}

inline int add(int a, int b)
{
	return a + b;
}

// modern c++
auto add2(int a, int b) -> int { return a + b; }

void inc(int& a) { a++; }

void functions(char** argv[])
{
	using namespace std;
	cout << argv[0] << endl;

	int n = 10;
	cout << n << endl;
	inc(n);
	cout << n << endl;
}

void lambda_functions()
{
	int x = 4;

	auto doubleValue = [](int z) { return z * 2;  };

	std::cout << x << "*2 = " << doubleValue(x) << std::endl;

	int y = 5;

	auto increaseByY = [y](int z) { return y + z;  };

	y = 100;

	std::cout << "The result of 4 + y = " << increaseByY(x) << std::endl;
}

enum Color
{
	Red,
	Green,
	Blue
};

enum class GameState : short
{
	Win = 1,
	Lose = 5
};

void enums()
{
	Color c = Red;
	int i = c;

	GameState gs = GameState::Win;
}

union Data
{
	int integer;
	float fpnumber;
	char* text;
};

struct Size
{
	int width, height;
};

int main(int argc, char* argv[])
{
	Size s{ 15, 10 };
	s.height;

	getchar();
	return 0;
}

