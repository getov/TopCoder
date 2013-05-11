#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

class SimpleWordGame
{
	public:

		int points(vector<string>, vector<string>);
};

int SimpleWordGame::points(vector<string> player, vector<string> dictionary)
{
	int score = 0;

	set<string> coll;
	set<string>::iterator iter;

	for (int j = 0; j < player.size(); ++j)
	{
		coll.insert(player[j]);
	}

	for (iter = coll.begin(); iter != coll.end(); ++iter)
	{
		for (int k = 0; k < dictionary.size(); ++k)
		{
			if (*iter == dictionary[k])
			{
				string temp = *iter;
				score += temp.size() * temp.size();
			}
		}
	}

	return score;
}

int main()
{
	vector<string> player;
	player.push_back("apple");
	player.push_back("orange");
	player.push_back("strawberry");

	vector<string> dictionary;
	dictionary.push_back("strawberry");
	dictionary.push_back("orange");
	dictionary.push_back("grapefruit");
	dictionary.push_back("watermelon");

	SimpleWordGame test;

	cout << test.points(player, dictionary) << endl;

	return EXIT_SUCCESS;
}