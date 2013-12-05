#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MiniatureDachshund
{
public:

	int maxMikan(vector<int> mikan, int weight);
};

int MiniatureDachshund::maxMikan(vector<int> mikan, int weight)
{
	const int MAX_WEIGHT = 5000;

	if (weight == MAX_WEIGHT)
	{
		return 0;
	}

	sort(mikan.begin(), mikan.end());

	int threshold = MAX_WEIGHT - weight;

	int sum = 0;
	int counter = 0;

	for (int i = 0; i < mikan.size(); ++i)
	{
		if (sum > threshold)
		{
			break;
		}

		sum += mikan[i];

		if (sum <= threshold)
		{
			++counter;
		}	
	}

	return counter;
}

int main()
{
	MiniatureDachshund test;

	vector<int> coll = { 200, 50, 200, 50, 200, 50, 200, 50 };

	cout << test.maxMikan(coll, 4800) << endl;

	return EXIT_SUCCESS;
}