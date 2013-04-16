#include <iostream>
#include <vector>
#include <set>

using namespace std;

class TeamSplit
{
	public:

		int difference(vector<int>);
};

int TeamSplit::difference(vector<int> strenghts)
{
	int strOne = 0;
	int strTwo = 0;

	multiset<int> coll;

	for (int i = 0; i < strenghts.size(); ++i)
	{
		coll.insert(strenghts[i]);
	}

	multiset<int>::reverse_iterator iter;
	int count = 0;
	
	for (iter = coll.rbegin(); iter != coll.rend(); ++iter)
	{
		if (count % 2 == 0)
		{
			strOne += *iter;
		}
		else
		{
			strTwo += *iter;
		}

		++count;
	}

	return abs(strOne - strTwo);
}

int main()
{
	vector<int> coll;
	coll.push_back(5);
	coll.push_back(7);
	coll.push_back(8);
	coll.push_back(4);
	coll.push_back(2);

	TeamSplit test;

	cout << test.difference(coll) << endl;

	return EXIT_SUCCESS;
}