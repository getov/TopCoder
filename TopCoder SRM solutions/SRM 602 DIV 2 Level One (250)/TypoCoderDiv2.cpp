#include <iostream>
#include <string>
#include <algorithm>
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

using namespace std;

class TypoCoderDiv2
{
public:

	int count(vector<int> rating);
};

int TypoCoderDiv2::count(vector<int> rating)
{
	int colorChanges = 0;
	bool state = false;

	for (int i = 0; i < rating.size(); ++i)
	{
		if (rating[i] >= 1200 && !state)
		{
			++colorChanges;
			state = true;
		}

		if (rating[i] < 1200 && state)
		{
			++colorChanges;
			state = false;
		}
	}

	return colorChanges;
}

int main()
{
	TypoCoderDiv2 test;

	vector<int> coll = { 575, 1090, 3271, 2496, 859, 2708, 3774, 2796, 1616, 2552, 3783, 2435, 1111, 526, 562 };

	cout << test.count(coll) << endl;

	return EXIT_SUCCESS;
}