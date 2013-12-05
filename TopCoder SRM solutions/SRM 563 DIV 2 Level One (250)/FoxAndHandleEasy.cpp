#include <iostream>
#include <string>

using namespace std;

class FoxAndHandleEasy
{
public:

	string isPossible(string S, string T);
};

string FoxAndHandleEasy::isPossible(string S, string T)
{
	string temp = S;

	for (int i = 0; i < S.size(); ++i)
	{
		temp.insert(i, S);

		if (temp == T)
		{
			return "Yes";
		}

		temp = S;
	}

	return "No";
}

int main()
{
	FoxAndHandleEasy test;

	cout << test.isPossible("Long", "LongLong") << endl;

	return EXIT_SUCCESS;
}