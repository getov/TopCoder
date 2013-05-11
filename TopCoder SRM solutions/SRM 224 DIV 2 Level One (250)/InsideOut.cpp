#include <iostream>
#include <string>

using namespace std;

class InsideOut
{
	public:

		string unscramble(string line);
};

string InsideOut::unscramble(string line)
{
	int leftEnd = (line.size() / 2) - 1;
	int rightBeg = line.size() / 2;

	string getLeft = "";
	getLeft += line[leftEnd];
	
	for (int i = leftEnd - 1; i >= 0; --i)
	{
		getLeft += line[i];
	}

	string getRight = "";
	getRight += line[line.size() - 1];

	for (int i = line.size() - 2; i >= rightBeg; --i)
	{
		getRight += line[i];
	}
	
	return getLeft + getRight;
}

int main()
{
	InsideOut test;

	cout << test.unscramble("RUT OWT SNEH HCNERF EERHTEGDIRTRAP A DNA  SEVODELT") << endl;

	return EXIT_SUCCESS;
}