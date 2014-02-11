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

class KeyDungeonDiv2
{
public:
	int countDoors(vector<int> doorR, vector<int> doorG, vector<int> keys);
};

int KeyDungeonDiv2::countDoors(vector<int> doorR, vector<int> doorG, vector<int> keys)
{
	int counter = 0;

	for (int i = 0; i < doorR.size(); ++i)
	{
		if (doorR[i] <= keys[0] && doorG[i] <= keys[1])
		{
			++counter;
		}
		else if (doorR[i] > keys[0] && doorG[i] <= keys[1])
		{
			if (doorR[i] <= (keys[0] + keys[2]))
			{
				++counter;
			}
		}
		else if (doorR[i] <= keys[0] && doorG[i] > keys[1])
		{
			if (doorG[i] <= (keys[1] + keys[2]))
			{
				++counter;
			}
		}
		else if (doorR[i] > keys[0] && doorG[i] > keys[1])
		{
			if (keys[2] >= ((doorR[i] - keys[0]) + (doorG[i] - keys[1])))
			{
				++counter;
			}
		}
	}

	return counter;
}

int main()
{
	KeyDungeonDiv2 test;

	vector<int> red = { 41, 44, 41, 57, 58, 74, 84, 100, 58, 2, 43, 32, 82, 97, 44, 13, 35, 98, 96, 81, 43, 77, 18, 51, 27,
		27, 39, 39, 45, 82, 59, 20, 28, 93, 6, 39, 64, 78, 28, 85, 17, 56, 3, 68, 4, 0, 36, 80, 41, 77 };
	vector<int> green = { 67, 15, 53, 36, 88, 29, 26, 57, 68, 99, 97, 27, 51, 70, 3, 49, 65, 75, 35, 92, 66, 0, 23, 96, 38, 86,
		98, 31, 26, 75, 30, 2, 92, 78, 100, 99, 38, 26, 85, 74, 77, 15, 16, 48, 100, 88, 55, 93, 99, 54 };
	vector<int> keys = { 39, 31, 34 };

	cout << test.countDoors(red, green, keys) << endl;

	return EXIT_SUCCESS;
}