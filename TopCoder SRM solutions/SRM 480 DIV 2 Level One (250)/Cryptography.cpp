#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Cryptography
{
	public:

		long long encrypt(vector<int> numbers);
};

long long Cryptography::encrypt(vector<int> numbers)
{
	int minVal = min(numbers[0], numbers[1]);
	int index;

	if (minVal == numbers[0])
	{
		index = 0;
	}
	else
	{
		index = 1;
	}

	for (int i = 2; i < numbers.size(); ++i)
	{
		if (minVal > numbers[i])
		{
			minVal = numbers[i];
			index  = i;
		}
	}

	numbers[index] += 1;

	long long product = 1;

	for (int i = 0; i < numbers.size(); ++i)
	{
		product *= numbers[i];
	}

	return product;
}

int main()
{
	Cryptography test;
	vector<int> coll;
	coll.push_back(1000);
	coll.push_back(999);
	coll.push_back(998);
	coll.push_back(997);
	coll.push_back(996);
	coll.push_back(995);

	cout << test.encrypt(coll) << endl;

	return EXIT_SUCCESS;
}