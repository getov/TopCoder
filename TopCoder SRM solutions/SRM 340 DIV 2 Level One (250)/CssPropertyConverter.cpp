#include <iostream>
#include <string>

using namespace std;

class CssPropertyConverter
{
	public:

		string getCamelized(string);
};

string CssPropertyConverter::getCamelized(string cssPropertyName)
{
	for (int i = 0; i < cssPropertyName.size(); ++i)
	{
		if (cssPropertyName[i] == '-')
		{
			cssPropertyName[i + 1] = toupper(cssPropertyName[i + 1]);
			cssPropertyName.erase(i, 1);
			i = i - 1;
		}
	}

	return cssPropertyName;
}

int main()
{
	CssPropertyConverter test;

	cout << test.getCamelized("top-border-width") << endl;

	return EXIT_SUCCESS;
}