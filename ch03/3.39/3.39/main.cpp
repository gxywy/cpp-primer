#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s = "haha", s2 = "lala";
	char c[] = "haha", c2[] = "lala";

	if (s == s2)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	if (strcmp(c, c2) == 0)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	return 0;
}