#include <iostream>
#include <vector>
using std::cin;
using std::endl;
using std::vector;

int main()
{
	int num;
	vector<int> v;
	while (cin >> num)
		v.push_back(num);

	return 0;
}