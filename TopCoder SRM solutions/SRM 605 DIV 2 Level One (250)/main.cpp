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

class AlienAndPassword
{
public:
	int getNumber(string S);
};

int AlienAndPassword::getNumber(string S)
{
	set<char> coll;
	int counter = 0;
	for (int i = 0; i < S.size() - 1; ++i)
	{
		if (S[i] == S[i + 1])
		{
			++counter;
		}
	}

	return S.size() - counter;
}

int main()
{


	return EXIT_SUCCESS;
}