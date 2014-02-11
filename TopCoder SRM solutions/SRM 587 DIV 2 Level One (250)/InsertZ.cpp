#include <iostream>
#include <cmath>
#include <cstdio> 
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <utility>
#include <cassert>
#include <sstream>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

class InsertZ
{
public:
	string canTransform(string init, string goal);
};

string InsertZ::canTransform(string init, string goal)
{
	if (init == goal)
	{
		return "Yes";
	}

	for (int i = 0; i < init.size(); ++i)
	{
		if (goal.find(init[i]) == string::npos || goal.find('z') == string::npos)
		{
			return "No";
		}
	}

	return "Yes";
}

int main()
{
	InsertZ test;

	cout << test.canTransform("opdlfmvuicjsierjowdvnx", "zzopzdlfmvzuicjzzsizzeijzowvznxzz") << endl;

	return EXIT_SUCCESS;
}