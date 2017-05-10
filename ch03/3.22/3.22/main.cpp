#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> text;
	for (string line; getline(cin, line); text.push_back(line));

	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
	{
		for (auto &c : *it)
			c = toupper(c);
	}

	for (auto item : text)
		cout << item << " ";

	cout << endl;

	return 0;
}