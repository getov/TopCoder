#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Thimbles
{
	public:

		int thimbleWithBall(vector<string>);
};

int Thimbles::thimbleWithBall(vector<string> swaps)
{
	int ballID = 1;

	for (int i = 0; i < swaps.size(); ++i)
	{
		istringstream iss(swaps[i]);
		int first;
		int second;
		char dash;

		iss >> first >> dash >> second;

		if (ballID == first)
		{
			ballID = second;
		}
		else if (ballID == second)
		{
			ballID = first;
		}
	}

	return ballID;
}

int main()
{
	vector<string> coll;
	coll.push_back("3-1");
	coll.push_back("2-3");
	coll.push_back("3-1");
	coll.push_back("3-2");

	Thimbles test;

	cout << test.thimbleWithBall(coll) << endl;

	return EXIT_SUCCESS;
}