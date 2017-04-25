#include <iostream>

int main()
{
	std::cout << "/*";
	std::cout << "*/";
	//error	std::cout << /* "*/" */;
	std::cout << /* "*/" /* "/*" */;

	return 0;
}