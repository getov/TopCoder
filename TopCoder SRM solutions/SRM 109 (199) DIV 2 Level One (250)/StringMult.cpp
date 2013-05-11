#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class StringMult
{
	public:

		string times(string, int);
};

string StringMult::times(string sFactor, int iFactor)
{
	if (sFactor.empty() || iFactor == 0)
	{
		return "";
	}
	else if (iFactor > 0)
	{
		string temp = sFactor;

		for (int i = 1; i < iFactor; ++i)
		{
			sFactor += temp;
		}
	}
	else if (iFactor < 0)
	{
		string temp = sFactor;

		for (int i = 1; i < abs(iFactor); ++i)
		{
			sFactor += temp;
		}

		reverse(sFactor.begin(), sFactor.end());
	}

	return sFactor;
}

int main()
{
	StringMult test;

	cout << test.times("Racecar", -5) << endl;

	return EXIT_SUCCESS;
}