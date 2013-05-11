#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

class MassiveNumbers
{
	public:

		string getLargest(string numA, string numB);
};

string MassiveNumbers::getLargest(string numA, string numB)
{
	char separator;

	int base_1;
	int exp_1;

	istringstream streamOne(numA);
	streamOne >> base_1 >> separator >> exp_1;

	int base_2;
	int exp_2;

	istringstream streamTwo(numB);
	streamTwo >> base_2 >> separator >> exp_2;

	if (exp_1 * log(base_1) > exp_2 * log(base_2))
	{
		return numA;
	}
	else
	{
		return numB;
	}
}

int main()
{
	MassiveNumbers test;

	cout << test.getLargest("999^1000", "1000^999") << endl;

	return EXIT_SUCCESS;
}