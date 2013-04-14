#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MedianOfNumbers
{
	public:

		int findMedian(vector<int> numbers);
};

int MedianOfNumbers::findMedian(vector<int> numbers)
{
	if (numbers.size() % 2 == 0)
	{
		return -1;
	}
	else
	{
		sort(numbers.begin(), numbers.end());

		int medianIndex = numbers.size() / 2;

		return numbers[medianIndex];
	}
}

int main()
{
	vector<int> coll;
	coll.push_back(1);
	coll.push_back(4);
	coll.push_back(2);
	coll.push_back(5);
	coll.push_back(7);

	MedianOfNumbers test;

	cout << test.findMedian(coll) << endl;

	return EXIT_SUCCESS;
}