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
	vector<int> v;
	int num;

	while (cin >> num)
		v.push_back(num);

	for (int i = 1; i < v.size(); ++i)
		cout << v[i - 1] + v[i] << " ";
	cout << endl;

	int i = 0;
	while (((v.size() - 1 - i) - i) > 1)
	{
		cout << v[i] + v[v.size() - 1] << " ";
		++i;
	}
	cout << endl;

	return 0;
}