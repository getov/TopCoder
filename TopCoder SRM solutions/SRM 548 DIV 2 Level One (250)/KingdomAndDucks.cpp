#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class KingdomAndDucks
{
	public:
		int minDucks(vector<int> duckTypes);
};

int KingdomAndDucks::minDucks(vector<int> duckTypes)
{
	int counter = 1;
	int countTypes = 1;
	vector<int> numTypes;

	sort(duckTypes.begin(), duckTypes.end());
	int temp = duckTypes[0];

	if (duckTypes.size() > 1)
	{
		for (int i = 1; i < duckTypes.size(); ++i)
		{
			if (temp == duckTypes[i])
			{
				++counter;
			}
			else
			{
				numTypes.push_back(counter);
				temp = duckTypes[i];
				counter = 1;
				++countTypes;
			}
		}

		if (numTypes.empty())
		{
			return counter;
		}
		else
		{
			return (*max_element(numTypes.begin(), numTypes.end())) * countTypes;
		}
	
	}

	return 1;
}

int main()
{
	KingdomAndDucks test;

	vector<int> coll;
	coll.push_back(4);
	coll.push_back(7);
	coll.push_back(4);
	coll.push_back(7);
	coll.push_back(4);

	cout << test.minDucks(coll) << endl;

	return EXIT_SUCCESS;
}