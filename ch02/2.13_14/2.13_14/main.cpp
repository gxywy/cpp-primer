#include <iostream>

int i = 42;

int main()
{
	int i = 10;
	int j = i;
	std::cout << j << std::endl;

	int t = 100, sum = 0;
	for (int t = 0; t != 10; ++t)
		sum += t;

	std::cout << t << " " << sum << std::endl;

	return 0;
}