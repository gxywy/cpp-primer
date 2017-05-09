#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	string s;
	vector<string> v;
	
	while (cin >> s)
		v.push_back(s);

	for (auto &i : v)
	{
		for (int k = 0; k < i.size(); ++k)
		{
			i[k] = toupper(i[k]);
		}
	}

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;

	return 0;
}