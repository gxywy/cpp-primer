#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v;
	for (int i; cin >> i; v.push_back(i));

	for (auto beg = v.begin(), end = v.end() - 1; beg < end; ++beg, --end)
		cout << *beg + *end << endl;

	return 0;
}
