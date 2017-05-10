#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	unsigned grade;
	vector<unsigned> score(11, 0);
	auto it = score.begin();

	while (cin >> grade)
	{
		if (grade <= 100)
			it = it + grade / 10;
		
		*it += 1;
		it = score.begin();
	}

	for (auto i : score)
		cout << i << " ";
	cout << endl;


	return 0;
}