#include <iostream>
#include <string>
#include <vector>

using namespace std;

class WorkingRabbits
{
	public:
		double getEfficiency(vector<string> profit);
};

double WorkingRabbits::getEfficiency(vector<string> profit)
{
	double P = 0;
	double Q = 0;

	for (int i = 0; i < profit.size(); ++i)
	{
		for (int j = i + 1; j < profit[i].size(); ++j)
		{
			++Q;
			P += (profit[i][j] - '0');
		}
	}

	return P / Q;
}

int main()
{
	WorkingRabbits test;

	vector<string> coll;
	coll.push_back("0999");
	coll.push_back("9099");
	coll.push_back("9909");
	coll.push_back("9990");

	cout << test.getEfficiency(coll) << endl;

	return EXIT_SUCCESS;	
}