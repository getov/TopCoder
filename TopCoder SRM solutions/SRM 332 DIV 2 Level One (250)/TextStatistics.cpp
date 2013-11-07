#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class TextStatistics
{
	public:
		double averageLength(string text);
};

double TextStatistics::averageLength(string text)
{
	vector<string> wordVector;

	stringstream stringStream(text);
	string line;

	while(getline(stringStream, line)) 
	{
		size_t prev = 0, pos;
		while ((pos = line.find_first_of(" ,.?!-0123456789", prev)) != string::npos)
		{
			if (pos > prev)
			{
				wordVector.push_back(line.substr(prev, pos - prev));
			}
			prev = pos + 1;
		}
		if (prev < line.length())
		{
			wordVector.push_back(line.substr(prev, string::npos));
		}
	}

	double average = 0;

	if (!wordVector.empty())
	{
		for (int i = 0; i < wordVector.size(); ++i)
		{
			average += wordVector[i].length();
		}
		return average /= wordVector.size();
	}

	return average;
}

int main()
{
	TextStatistics test;

	string text = "0123";

	cout << test.averageLength(text) << endl;

	return EXIT_SUCCESS;
}