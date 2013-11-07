#include <iostream>
#include <cmath>

using namespace std;

class MagicalGirlLevelOneDivTwo
{
	public:
		double theMinDistance(int d, int x, int y);
};

double MagicalGirlLevelOneDivTwo::theMinDistance(int d, int x, int y)
{
	int my_x = max(0, abs(x) - d);
	int my_y = max(0, abs(y) - d);

	return sqrt(static_cast<double>(my_x*my_x + my_y*my_y));
}

int main()
{
	MagicalGirlLevelOneDivTwo test;

	cout << test.theMinDistance(5, 10, 3) << endl;

	return EXIT_SUCCESS;
}