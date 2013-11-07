#include <iostream>
#include <vector>
#include <string>

using namespace std;

class RussianSpeedLimits
{
	public:
		int getCurrentLimit(vector<string> signs);
};

int RussianSpeedLimits::getCurrentLimit(vector<string> signs)
{
	bool isInCity = true;
	int lastLimit;

	for (int i = 0; i < signs.size(); ++i)
	{
		if (signs[i] == "city" && isInCity)
		{
			isInCity = false;
			lastLimit = 90;
		}
		else if (signs[i] == "city" && !isInCity)
		{
			isInCity = true;
			lastLimit = 60;
		}		
		else if (signs[i] == "default" && isInCity)
		{
			lastLimit = 60;
		}
		else if (signs[i] == "default" && !isInCity)
		{
			lastLimit = 90;
		}
		else
		{
			lastLimit = stoi(signs[i]);
		}
	}

	return lastLimit;
}

int main()
{
	RussianSpeedLimits test;

	vector<string> coll;
	coll.push_back("city");
	coll.push_back("50");
	coll.push_back("default");

	cout << test.getCurrentLimit(coll) << endl;

	return EXIT_SUCCESS;
}