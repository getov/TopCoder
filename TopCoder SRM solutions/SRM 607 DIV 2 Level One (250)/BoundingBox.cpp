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

class BoundingBox
{
public:
	int smallestArea(vector<int> X, vector<int> Y);
};

int BoundingBox::smallestArea(vector<int> X, vector<int> Y)
{
	sort(X.begin(), X.end());
	sort(Y.begin(), Y.end());

	int delta_x = X.back() - X[0];
	int delta_y = Y.back() - Y[0];

	return delta_x * delta_y;
}

int main()
{
	BoundingBox test;
		
	vector<int> x = { 9, -88, -40, 98, -55, 41, -38 };
	vector<int> y = { -65, 56, -67, 7, -58, 33, 68 };

	cout << test.smallestArea(x, y) << endl;

	return EXIT_SUCCESS;
}