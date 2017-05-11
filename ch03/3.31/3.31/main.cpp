#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int arr[10];
	int arr2[10];

	for (int i = 0; i < 10; ++i)
		arr2[i] = arr[i] = i;

	vector<int> v(10);
	for (auto it = v.begin(); it != v.end(); ++it)
		*it = it - v.begin();

	for (auto i : arr2)
		cout << i << " ";
	cout << endl;

	for (auto i : v)
		cout << i << " ";
	cout << endl;

	return 0;
}