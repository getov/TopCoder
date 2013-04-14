#include <iostream>
#include <vector>

using namespace std;

class SkiResortsEasy
{
	public:

		int minCost(vector<int> altitude)
		{
			int curCost = 0;
			int minCost = 0;

			vector<int>::iterator iOne;
			vector<int>::iterator iTwo;

			iOne = altitude.begin();
			iTwo = altitude.begin() + 1;

			while (iTwo != altitude.end())
			{
				if (*iOne < *iTwo)
				{
					curCost = *iTwo - *iOne;
					minCost += curCost;
					*iTwo   = *iOne;
				}

				++iOne;
				++iTwo;
			}

			return minCost;
		}
};

int main()
{
	vector<int> coll;

	coll.push_back(5);
	coll.push_back(8);
	coll.push_back(9);

	SkiResortsEasy test;

	int result = test.minCost(coll);

	cout << result << endl;

	return EXIT_SUCCESS;
}