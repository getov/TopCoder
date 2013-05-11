#include <iostream>
#include <string>
#include <vector>

using namespace std;

class LetterStrings
{
	public:

		int sum(vector<string> s);
};

int LetterStrings::sum(vector<string> s)
{
	int count = 0;

	for (int i = 0; i < s.size(); ++i)
	{
		for (int j = 0; j < s[i].size(); ++j)
		{
			if (s[i][j] != '-')
			{
				++count;
			}
		}
	}

	return count;
}

int main()
{
	LetterStrings test;

	vector<string> coll;
	coll.push_back("-A-B-C-D");
	coll.push_back("--------EFGHI");
	coll.push_back("JKLMNOPQR");
	coll.push_back("---STU-VW-XYZ");

	cout << test.sum(coll) << endl;

	return EXIT_SUCCESS;
}