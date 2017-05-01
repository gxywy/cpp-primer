#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
	string s, result;
	cin >> s;
	for (auto n : s)
	{
		if (!ispunct(n))
		{
			if (result.empty())
				result = n;
			else
				result += n;
		}
	}
	cout << result << endl;

	return 0;
}