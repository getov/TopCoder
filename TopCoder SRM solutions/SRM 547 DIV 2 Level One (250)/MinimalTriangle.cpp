#include <iostream>
#include <cmath>

using namespace std;

class MinimalTriangle
{
	public:
		double maximalArea(int length);
};

double MinimalTriangle::maximalArea(int length)
{
	return ((length * length * (sqrt(3)/2)) / 2);
}

int main()
{
	MinimalTriangle test;

	cout << test.maximalArea(5) << endl;

	return EXIT_SUCCESS;
}