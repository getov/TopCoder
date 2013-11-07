#include <iostream>
#include <cmath>

using namespace std;

class TheArithmeticProgression
{
	public:
		double minimumChange(int a, int b, int c);
};

double TheArithmeticProgression::minimumChange(int a, int b, int c)
{
	double t = static_cast<double>(a + c) / 2;
	double r = abs(t - b);

	return r;
}

int main()
{
	TheArithmeticProgression test;

	cout << test.minimumChange(4, 4, 8) << endl;

	return EXIT_SUCCESS;
}
