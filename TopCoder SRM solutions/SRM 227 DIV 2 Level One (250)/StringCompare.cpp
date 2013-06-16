#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class StringCompare
{
	public:
		int simpleDifference(string a, string b);
};

int StringCompare::simpleDifference(string a, string b)
{
	int size = min(a.size(), b.size());
	int counter = 0;

	for (int i = 0; i < size; ++i)
	{
		if (a[i] == b[i])
		{
			++counter;
		}
	}

	return counter;
}

int main()
{
	StringCompare test;

	cout << test.simpleDifference("AS", "ES") << endl;

	return EXIT_SUCCESS;
}