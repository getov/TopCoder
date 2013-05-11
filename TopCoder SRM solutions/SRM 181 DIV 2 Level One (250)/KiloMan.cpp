#include <iostream>
#include <string>
#include <vector>

using namespace std;

class KiloMan
{
	public:
		
		int hitsTaken(vector<int> pattern, string jumps);
};

int KiloMan::hitsTaken(vector<int> pattern, string jumps)
{
	int hits = 0;

	for (int i = 0; i < pattern.size(); ++i)
	{
		if (pattern[i] > 2)
		{
			if (jumps[i] == 'J')
			{
				++hits;
			}
		}
		else
		{
			if (jumps[i] == 'S')
			{
				++hits;
			}
		}
	}

	return hits;
}

int main()
{
	vector<int> coll;
	coll.push_back(1);
	coll.push_back(3);
	coll.push_back(2);
	coll.push_back(3);
	coll.push_back(3);
	coll.push_back(1);
	coll.push_back(2);
	coll.push_back(2);
	coll.push_back(1);

	string jumps = "JJSSSJSSJ";

	KiloMan test;

	cout << test.hitsTaken(coll, jumps) << endl;

	return EXIT_SUCCESS;
}