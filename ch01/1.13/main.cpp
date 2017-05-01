#include <iostream>

int main()
{
	int v1 = 0, v2 = 0, t = 0;

	std::cout << "Please enter two numbers:" << std::endl;
	std::cin >> v1 >> v2;

	if (v1 > v2)
	{
		t = v1;
		v1 = v2;
		v2 = t;
	}

	for (int i = v1 ; i <= v2; i++)
	{
		std::cout << i << std::endl;
	}

	return 0;
}