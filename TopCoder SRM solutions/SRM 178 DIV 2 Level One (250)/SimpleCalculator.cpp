#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class SimpleCalculator
{
	public:

		int calculate(string input);
};

int SimpleCalculator::calculate(string input)
{
	istringstream iss(input);
	int leftNum;
	int rightNum;
	char sign;

	iss >> leftNum >> sign >> rightNum;

	switch (sign)
	{
		case '+': return leftNum + rightNum;
		case '-': return leftNum - rightNum;
		case '*': return leftNum * rightNum;
		case '/': return leftNum / rightNum;
	}
}

int main()
{
	SimpleCalculator test;

	cout << test.calculate("0000000000000018/00000000000000000009") << endl;

	return EXIT_SUCCESS;
}