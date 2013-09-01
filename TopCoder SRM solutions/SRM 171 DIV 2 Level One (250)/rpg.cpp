#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class RPG
{
	public:	
		vector<int> dieRolls(vector<string> dice);
};

vector<int> RPG::dieRolls(vector<string> dice)
{
	int n;
	char separator;
	int sides;

	int min = 0;
	int max = 0;

	for (int i = 0; i < dice.size(); ++i)
	{
		istringstream iss(dice[i]);

		iss >> n >> separator >> sides;

		min += n;
		max += n * sides;
	}

	vector<int> minMaxAv;
	minMaxAv.push_back(min);
	minMaxAv.push_back(max);
	minMaxAv.push_back((min + max) / 2);

	return minMaxAv;
}

int main()
{
	RPG test;

	vector<string> coll;
	coll.push_back("1d2");
	coll.push_back("2d2");
	coll.push_back("4d2");
	coll.push_back("6d2");
	coll.push_back("8d2");

	vector<int> result = test.dieRolls(coll);
	
	for (auto i = result.begin(); i != result.end(); ++i)
	{
		cout << *i << " ";
	}

	cout << endl;

	return EXIT_SUCCESS;
}