#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class ErasingCharacters
{
public:

	string simulate(string s);
};

string ErasingCharacters::simulate(string s)
{
	bool hasMore = true;

	while (hasMore)
	{
		if (s.empty() || s.size() == 1)
		{
			break;
		}

		for (int i = 0; i < s.size() - 1; ++i)
		{
			if (s[i] == s[i + 1])
			{
				s.erase(i, 2);
				hasMore = true;
				break;
			}

			hasMore = false;
		}
	}

	return s;
}

int main()
{
	ErasingCharacters test;

	cout << test.simulate("eel") << endl;

	return EXIT_SUCCESS;
}