#include <iostream>

int main()
{
	int v1 = 0, v2 = 0, t = 0;

	std::cout << "Please enter two number:" << std::endl;
	std::cin >> v1 >> v2;
	if (v1 > v2)
	{
		t = v1;
		v1 = v2;
		v2 = t;
	}

	while (v1 <= v2)
	{
		std::cout << v1 << std::endl;
		++v1;
	}
	

	return 0;
}