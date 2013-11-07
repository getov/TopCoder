#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class TheJediTestDiv2
{
	public:
		int countSupervisors(vector<int> students, int Y, int J);
};

int TheJediTestDiv2::countSupervisors(vector<int> students, int Y, int J)
{
	vector<int>::iterator iterToMax = min_element(students.begin(), students.end());
	int jediNumber = 0;

	if (*iterToMax % Y == 0 || *iterToMax < Y)
	{
		students.erase(iterToMax);
	}
	else
	{
		if ((*iterToMax % Y) % J == 0)
		{
			jediNumber = (*iterToMax % Y) / J;
		}
		else
		{
			jediNumber = ((*iterToMax % Y) / J) + 1;
		}

		students.erase(iterToMax);
	}

	if (!students.empty())
	{
		for (int i = 0; i < students.size(); ++i)
		{
			if (students[i] % J == 0)
			{
				jediNumber += students[i] / J;
			}
			else
			{
				jediNumber += (students[i] / J) + 1;
			}
		}
	}

	return jediNumber;
}

int main()
{
	TheJediTestDiv2 test;

	vector<int> coll;
	coll.push_back(4);
	coll.push_back(7);
	coll.push_back(10);
	coll.push_back(5);
	coll.push_back(6);
	coll.push_back(55);
	coll.push_back(2);

	cout << test.countSupervisors(coll, 20, 3) << endl;

	return EXIT_SUCCESS;
}