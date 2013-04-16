#include <iostream>
#include <vector>
#include <string>

using namespace std;

class AccessLevel
{
	public:

		string canAccess(vector<int>, int);
};

string AccessLevel::canAccess(vector<int> rights, int minPermission)
{
	string access = "";

	for (int i = 0; i < rights.size(); ++i)
	{
		if (rights[i] < minPermission)
		{
			access += "D";
		}
		else
		{
			access += "A";
		}
	}

	return access;
}

int main()
{
	vector<int> coll;
	coll.push_back(0);
	coll.push_back(1);
	coll.push_back(2);
	coll.push_back(3);
	coll.push_back(20);
	coll.push_back(14);
	coll.push_back(1);

	AccessLevel test;

	cout << test.canAccess(coll, 5) << endl;

	return EXIT_SUCCESS;
}