#include <iostream>
#include <vector>

using namespace std;

class LevelUp
{
	public:
		int toNextLevel(vector<int> expNeeded, int received);
};

int LevelUp::toNextLevel(vector<int> expNeeded, int received)
{
	vector<int>::iterator iter;

	if (received > expNeeded[expNeeded.size() - 1])
	{
		return 0;
	}

	for (iter = expNeeded.begin(); iter != expNeeded.end(); ++iter)
	{
		if (received == *iter)
		{
			if ((iter + 1) == expNeeded.end())
			{
				return 0;
			}
			else
			{
				return *(iter + 1) - *iter;
			}
		}

		if (received < *iter)
		{
			return *iter - received;
		}
	}
}

int main()
{
	vector<int> coll;
	coll.push_back(450);
	coll.push_back(150);
	coll.push_back(900);
	coll.push_back(1800);

	LevelUp test;

	cout << test.toNextLevel(coll, 1900) << endl;

	return EXIT_SUCCESS;
}