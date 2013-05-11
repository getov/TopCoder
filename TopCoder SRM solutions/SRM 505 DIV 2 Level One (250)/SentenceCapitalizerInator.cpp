#include <iostream>
#include <string>

using namespace std;

class SentenceCapitalizerInator
{
	public:

		string fixCaps(string);
};

string SentenceCapitalizerInator::fixCaps(string paragraph)
{
	paragraph[0] = toupper(paragraph[0]);

	for (int i = 1; i < paragraph.size(); ++i)
	{
		if (paragraph[i] == '.' && paragraph[i + 1] == ' ')
		{
			paragraph[i + 2] = toupper(paragraph[i + 2]);
		}
	}

	return paragraph;
}

int main()
{
	SentenceCapitalizerInator test;

	cout << test.fixCaps("hello programmer. welcome to topcoder.") << endl;

	return EXIT_SUCCESS;
}