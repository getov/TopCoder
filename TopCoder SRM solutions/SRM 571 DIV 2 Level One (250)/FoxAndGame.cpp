#include <iostream>
#include <vector>
#include <string>

using namespace std;

class FoxAndGame
{
	public:

		int countStars(vector<string> result)
		{
			string noStars  = "---";
			string oneStar  = "o--";
			string twoStars = "oo-";
			string allStars = "ooo";

			int starsCount = 0;

			vector<string>::iterator iter;

			for (iter = result.begin(); iter != result.end(); ++iter)
			{
				if (*iter == noStars)
				{
					starsCount += 0;
				}
				else if (*iter == oneStar)
				{
					starsCount += 1;
				}
				else if (*iter == twoStars)
				{
					starsCount += 2;
				}
				else if (*iter == allStars)
				{
					starsCount += 3;
				}
			}

			return starsCount;
		}
};

int main()
{
	vector<string> coll;

	coll.push_back("ooo");
	coll.push_back("oo-");
	coll.push_back("---");
	coll.push_back("ooo");
	coll.push_back("---");

	FoxAndGame test;

	cout << test.countStars(coll) << endl;

	return EXIT_SUCCESS;
}