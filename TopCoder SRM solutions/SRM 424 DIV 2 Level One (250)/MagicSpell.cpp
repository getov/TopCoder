#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class MagicSpell
{
	public:
		string fixTheSpell(string spell);
};

string MagicSpell::fixTheSpell(string spell)
{
	vector<char> coll;

	for (int i = 0; i < spell.size(); ++i)
	{
		if (spell[i] == 'A' || spell[i] == 'Z')
		{
			coll.push_back(spell[i]);
		}
	}

	reverse(coll.begin(), coll.end());

	vector<char>::iterator iter = coll.begin();

	for (int i = 0; i < spell.size(); ++i)
	{
		if (spell[i] == 'A' || spell[i] == 'Z')
		{
			if (iter != coll.end())
			{
				spell[i] = *iter;
				++iter;
			}
		}
	}

	return spell;
}

int main()
{
	MagicSpell test;

	cout << test.fixTheSpell("AZBASGHNAZAHBNVZZGGGAGGZAZ") << endl;

	return EXIT_SUCCESS;
}