#include <iostream>

using namespace std;

class BiggestRectangleEasy
{
	public:

		int findArea(int N);
};

int BiggestRectangleEasy::findArea(int N)
{
	int maxArea;
	int side;
	int width = 0;
	int height = 0;

	if (N % 2 != 0)
	{
		N -= 1;
	}

	if (N % 4 == 0)
	{
		side = N / 4;
		maxArea = side * side;
	}
	else
	{
		width = N / 2;

		while (!(width == height + 1))
		{
			--width;
			++height;
		}

		maxArea = width * height;
	}

	return maxArea;
}

int main()
{
	BiggestRectangleEasy test;

	cout << test.findArea(10000) << endl;

	return EXIT_SUCCESS;
}