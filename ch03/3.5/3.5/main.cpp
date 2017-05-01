#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
	string s, total;
	while (cin >> s)
	{
		if (s.empty())
			break;
		if (total.empty())
			total += s;
		else
			total += " " + s;
	}
	cout << total << endl;

	return 0;
}