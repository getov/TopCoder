#include <iostream>
#include <vector>
#include <string>

using namespace std;

class TheBlackJackDivTwo
{
	public:

		int score(vector<string>);
};

int TheBlackJackDivTwo::score(vector<string> cards)
{
	int score = 0;

	for (int i = 0; i < cards.size(); ++i)
	{
		if (cards[i][0] >= '2' && cards[i][0] <= '9')
		{
			score += (cards[i][0] - '0');
		}
		else if (cards[i][0] == 'A')
		{
			score += 11;
		}
		else
		{
			score += 10;
		}
	}

	return score;
}

int main()
{
	vector<string> coll;
	coll.push_back("KS");
	coll.push_back("TS");
	coll.push_back("QC");

	TheBlackJackDivTwo test;

	cout << test.score(coll) << endl;

	return EXIT_SUCCESS;
}