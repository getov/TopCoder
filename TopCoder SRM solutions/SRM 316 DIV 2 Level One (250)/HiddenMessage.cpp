#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class HiddenMessage
{
	public:

		string getMessage(string text);
};

string HiddenMessage::getMessage(string text)
{
	string word;

	istringstream iss(text);

	vector<string> coll = vector<string>(istream_iterator<string>(iss), istream_iterator<string>());

	for (int i = 0; i < coll.size(); ++i)
	{
		word += coll[i][0];
	}

	return word;
}

int main()
{
	HiddenMessage test;

	cout << test.getMessage("  c    o d     e      r    ") << endl;

	return EXIT_SUCCESS;
}