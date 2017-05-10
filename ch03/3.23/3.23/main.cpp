#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> num;
	for (int i; cin >> i; num.push_back(i));

	for (auto it = num.begin(); it != num.end(); ++it)
		*it *= 2;

	for (auto n : num)
		cout << n << " ";
	cout << endl;

	return 0;
}