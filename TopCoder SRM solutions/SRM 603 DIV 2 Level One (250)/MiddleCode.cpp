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

class MiddleCode
{
public:
	string encode(string s);
};

string MiddleCode::encode(string s)
{
	string t = "";

	while (s != "")
	{
		if (s.size() % 2 != 0)
		{
			t += s[s.size() / 2];
			s.erase(s.size() / 2, 1);
		}
		else
		{
			int mid_1 = s.size() / 2;
			int mid_2 = (s.size() / 2) - 1;

			if (s[mid_1] < s[mid_2])
			{
				t += s[mid_1];
				s.erase(mid_1, 1);
			}
			else
			{
				t += s[mid_2];
				s.erase(mid_2, 1);
			}
		}
	}
	
	return t;
}

int main()
{
	MiddleCode test;

	cout << test.encode("adafaaaadafawafwfasdaa") << endl;

	return EXIT_SUCCESS;
}