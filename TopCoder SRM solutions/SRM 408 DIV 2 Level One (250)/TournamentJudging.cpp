#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class TournamentJudging
{
	public:
		int getPoints(vector<int> rawScores, vector<int> conversionFactor);
};

int TournamentJudging::getPoints(vector<int> rawScores, vector<int> conversionFactor)
{
	int sum = 0;

	for (int i = 0; i < rawScores.size(); ++i)
	{	
		sum += floor((static_cast<double>(rawScores[i]) / conversionFactor[i]) + 0.5);
	}

	return sum;
}

int main()
{
	TournamentJudging test;

	vector<int> scoresColl;
	/*scoresColl.push_back(0);
	scoresColl.push_back(1000000);
	scoresColl.push_back(5000);
	scoresColl.push_back(1000000);*/
	scoresColl.push_back(8);
	scoresColl.push_back(16);
	scoresColl.push_back(32);

	vector<int> factorColl;
	/*factorColl.push_back(1);
	factorColl.push_back(2);
	factorColl.push_back(1000000);
	factorColl.push_back(4);*/
	factorColl.push_back(10);
	factorColl.push_back(10);
	factorColl.push_back(5);

	cout << test.getPoints(scoresColl, factorColl) << endl;

	return EXIT_SUCCESS;
}