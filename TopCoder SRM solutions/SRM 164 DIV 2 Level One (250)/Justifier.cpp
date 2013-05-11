#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Justifier
{
	public:

		vector<string> justify(vector<string>);
};

vector<string> Justifier::justify(vector<string> textln)
{
	int maxLength = 0;
	int delta;

	vector<string> coll;

	for (int i = 0; i < textln.size(); ++i)
	{
		if (maxLength < textln[i].length())
		{
			maxLength = textln[i].length();
		}
	}

	for (int i = 0; i < textln.size(); ++i)
	{
		string helper = "";

		if (textln[i].length() < maxLength)
		{
			delta = maxLength - textln[i].length();

			for (int i = 0; i < delta; ++i)
			{
				helper += " ";
			}
		}

		coll.push_back(helper + textln[i]);
	}

	return coll;
}

int main()
{
	vector<string> coll;
	
	coll.push_back("LONGEST");
	coll.push_back("A");
	coll.push_back("LONGER");
	coll.push_back("SHORT");

	Justifier test;

	vector<string> justifiedCall = test.justify(coll);

	for (auto i = justifiedCall.begin(); i != justifiedCall.end(); ++i)
	{
		cout << *i << endl;
	}

	return EXIT_SUCCESS;
}