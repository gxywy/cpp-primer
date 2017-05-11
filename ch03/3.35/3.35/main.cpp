#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	int arr[10];

	for (int i = 0; i < 10; ++i)
		arr[i] = i + 1;

	int *e = end(arr);
	for (int *pa = begin(arr); pa < e; ++pa)
		*pa = 0;

	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	return 0;
}