#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MegaCoolNumbersEasy
{
	public:
		int count(int N);
};

int MegaCoolNumbersEasy::count(int N)
{
	int counter = 0;

	vector<int> coll;

	bool breakState = true;

	for (int i = 1; i <= N; ++i)
	{
		int n = i;

		if (n < 10)
		{
			coll.push_back(n);
		}
		else
		{
			while (n / 10 != 0)
			{
				coll.push_back(n % 10);
				n /= 10;
			}
			coll.push_back(n);
		}

		if (!coll.empty())
		{
			if (coll.size() == 1)
			{
				counter++;
			}
			else
			{
				reverse(coll.begin(), coll.end());
				int difference = abs(coll[0] - coll[1]);

				vector<int>::iterator iter;
				for (iter = coll.begin() + 1; iter != coll.end(); ++iter)
				{
					if (iter + 1 != coll.end())
					{
						if (difference != abs(*iter - *(iter + 1)))
						{
							breakState = true;
							break;
						}
						else
						{
							breakState = false;
						}
					}
				}

				if (!breakState)
				{
					counter++;
				}
			}
		}

		coll.clear();
	}

	return counter;
}

int main()
{
	MegaCoolNumbersEasy test;

	cout << test.count(500) << endl;

	return EXIT_SUCCESS;	
}