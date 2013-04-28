#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class SpeedTyper
{
	public:

		string lettersToPractice(string letters, vector<int> times);
};

// TODO: original order of return string

string SpeedTyper::lettersToPractice(string letters, vector<int> times)
{
	multimap<int, char> coll;
	multimap<int, char>::iterator iter;

	coll.insert(pair<int, char>(times[0], letters[0]));

	int sum = 0;
	int prevTime = times[0];


	for (int i = 1; i < letters.size(); ++i)
	{
		coll.insert(pair<int, char>(times[i] - prevTime, letters[i]));
		prevTime = times[i];
	}

	for (iter = coll.begin(); iter != coll.end(); ++iter)
	{
		sum += iter->first;
	}

	string keys = "";

	for (iter = coll.begin(); iter != coll.end(); ++iter)
	{
		if (iter->first > sum / letters.size())
		{
			keys += iter->second;
		}
	}

	return keys;
}

int main()
{
	vector<int> coll;
	coll.push_back(250);
	coll.push_back(300);
	coll.push_back(400);
	coll.push_back(800);

	string mesh = "dcab";

	SpeedTyper test;

	cout << test.lettersToPractice(mesh, coll) << endl;

	return EXIT_SUCCESS;
}