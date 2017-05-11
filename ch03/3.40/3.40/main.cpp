#include <iostream>
using std::cout;
using std::endl;

#pragma warning(disable:4996)
int main()
{
	char c[] = "Hello", c2[] = "World";
	char c3[11];
	strcpy(c3, c);
	strcat(c3, c2);
	cout << c3 << endl;

	return 0;
}