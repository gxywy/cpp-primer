#include <iostream>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;
using std::end;
using std::begin;
using std::vector;

bool compare(int *pb, int *pe, int *pb2, int *pe2)
{
	if ((pe - pb) == (pe2 - pb2))
		return false;
	else
	{
		for (int *i = pb, *j = pb2; (i != pe) && (i != pe2); ++i, ++j)
		{
			if (*i != *j)
				return false;
		}
	}
	
	return true;
}
int main()
{
	int arr[3] = {1, 2, 3};
	int arr2[3] = {1, 2, 4};
	
	if (compare(begin(arr), end(arr), begin(arr2), end(arr2)))
		cout << "True" << endl;
	else
		cout << "False" << endl;

	
	vector<int> v = {1, 2, 3};
	vector<int> v2 = {1, 2, 4};
	
	if (v == v2)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	return 0;
}