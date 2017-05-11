#include <iostream>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;
using std::end;
using std::begin;
using std::vector;

int main()
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr2[10];
	vector<int> v(begin(arr), end(arr));

	for (auto i : v)
		cout << i << " ";
	cout << endl;

	for (auto i = v.begin(); i != v.end(); ++i)
		arr2[i - v.begin()] = *i;

	for (auto i : arr2)
		cout << i << " ";
	cout << endl;


	return 0;
}