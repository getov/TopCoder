#include <iostream>
#include <string>

using namespace std;

class TitleString
{
	public:
		string toFirstUpperCase(string title);
};

string TitleString::toFirstUpperCase(string title)
{
	title[0] = toupper(title[0]);

	for (int i = 1; i < title.size(); ++i)
	{
		if (title[i - 1] == ' ' && title[i] != ' ')
		{
			title[i] = toupper(title[i]);
		}
	}

	return title;
}

int main()
{
	TitleString test;

	cout << test.toFirstUpperCase("hobbit: an unexpected adventure") << endl; 

	return EXIT_SUCCESS;
}