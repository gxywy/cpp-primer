#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
	string s;
	vector<string> v;
	while (cin >> s)
		v.push_back(s);

	return 0;
}