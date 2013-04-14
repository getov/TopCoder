#include <iostream>
#include <vector>

using namespace std;

class GreatFairyWar
{
	public:

		int minHP(vector<int> dps, vector<int> hp)
		{
			int totalDMG = 0;

			for (int i = 0; i < dps.size(); ++i)
			{
				totalDMG += dps[i] * hp[i];
			}

			return totalDMG;
		}
};

int main()
{
	vector<int> dps;
	dps.push_back(50);
	dps.push_back(30);
	dps.push_back(60);
	dps.push_back(10);

	vector<int> hp;
	hp.push_back(20);
	hp.push_back(100);
	hp.push_back(50);
	hp.push_back(80);

	GreatFairyWar test;

	cout << test.minHP(dps, hp) << endl;

	return EXIT_SUCCESS;
}