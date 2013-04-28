#include <iostream>
#include <vector>

using namespace std;

class RosePetals
{
	public:

		int getScore(vector<int>);
};

int RosePetals::getScore(vector<int> dice)
{
	int score = 0;

	for (int i = 0; i < dice.size(); ++i)
	{
		if (dice[i] % 2 != 0)
		{
			switch (dice[i])
			{
				case 1: score += 0;
						break;
				case 3: score += 2;
						break;
				case 5: score += 4;
						break;
			}
		}
	}

	return score;
}

int main()
{
	vector<int> coll;
	coll.push_back(1);
	coll.push_back(2);
	coll.push_back(3);
	coll.push_back(2);
	coll.push_back(1);

	RosePetals test;

	cout << test.getScore(coll) << endl;

	return EXIT_SUCCESS;
}