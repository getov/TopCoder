#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class BinaryPolynomialDivTwo
{
	public:
		int countRoots(vector<int> a);
};

int BinaryPolynomialDivTwo::countRoots(vector<int> a)
{
	int x1 = 0;
	int x2 = 1;
	int P_x1 = 0;
	int P_x2 = 0;
	int counter = 0;

	for (int i = 0; i < a.size(); ++i)
	{
		P_x1 += a[i] * pow(x1, i);
	}

	if (P_x1 % 2 == 0)
	{
		++counter;
	}

	for (int i = 0; i < a.size(); ++i)
	{
		P_x2 += a[i] * pow(x2, i);
	}

	if (P_x2 % 2 == 0)
	{
		++counter;
	}

	return counter;
}

int main()
{
	BinaryPolynomialDivTwo test;

	vector<int> coll;
	//coll.push_back(0);
	coll.push_back(1);
	/*coll.push_back(0);
	coll.push_back(1);*/

	cout << test.countRoots(coll) << endl;

	return EXIT_SUCCESS;
}