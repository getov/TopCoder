#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class OneFight
{
	public:

		int monsterKilling(vector<int> life, vector<int> damage, int yourDamage);
};

int OneFight::monsterKilling(vector<int> life, vector<int> damage, int yourDamage)
{
	int turns = 0;
	int enemiesDMG = 0;
	int index = 0;

	multimap<int, int> coll;

	vector<int>::iterator iterHP;
	vector<int>::iterator iterDMG;

	for (iterHP = life.begin(), iterDMG = damage.begin(); iterHP != life.end(); ++iterHP, ++iterDMG)
	{
		coll.insert(pair<int, int>(*iterDMG - *iterHP, index));
		++index;
	}

	multimap<int, int>::reverse_iterator pos;
	multimap<int, int>::reverse_iterator secPos = coll.rbegin();
	++secPos;
	for (pos = coll.rbegin(); pos != coll.rend(); ++pos)
	{
		if (life[pos->second] % yourDamage != 0)
		{
			turns = (life[pos->second] / yourDamage) + 1;
		}
		else
		{
			turns = (life[pos->second] / yourDamage);
		}
		
		enemiesDMG += turns * damage[pos->second];

		for ( ; secPos != coll.rend(); ++secPos)
		{
			enemiesDMG += turns * damage[secPos->second];
		}
	}

	return enemiesDMG + 1;
}

int main()
{
	vector<int> hp;
	hp.push_back(5);
	hp.push_back(5);
	hp.push_back(5);
	hp.push_back(5);
	hp.push_back(5);
	hp.push_back(5);
	hp.push_back(5);
	hp.push_back(5);
	hp.push_back(5);
	hp.push_back(5);

	vector<int> dmg;
	dmg.push_back(10);
	dmg.push_back(20);
	dmg.push_back(30);
	dmg.push_back(40);
	dmg.push_back(50);
	dmg.push_back(60);
	dmg.push_back(70);
	dmg.push_back(80);
	dmg.push_back(90);
	dmg.push_back(100);

	OneFight test;

	cout << test.monsterKilling(hp, dmg, 100) << endl;

	return EXIT_SUCCESS;
}