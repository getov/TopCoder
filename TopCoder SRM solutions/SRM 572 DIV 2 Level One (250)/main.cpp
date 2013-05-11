#include <iostream>
#include <string>
#include <vector>

using namespace std;

class EasyHomework
{
	public:

		string determineSign(vector<int> A)
		{
			unsigned int negativeCount = 0;

			for (auto iter = A.begin(); iter != A.end(); ++iter)
			{
				if (*iter == 0)
				{
					return "ZERO";
				}

				if (*iter < 0)
				{
					++negativeCount;
				}
			}

			if (negativeCount % 2 == 0)
			{
				return "POSITIVE";
			}
			else
			{
				return "NEGATIVE";
			}
		}
};

int main()
{
	vector<int> coll;
	coll.push_back(-5);
	coll.push_back(-1);
	coll.push_back(-10000);

	EasyHomework test;

	string getSign = test.determineSign(coll);

	cout << getSign << endl;

	return EXIT_SUCCESS;
}