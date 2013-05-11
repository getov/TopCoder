#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ArrayHash
{
	public:

		int getHash(vector<string>);
};

int ArrayHash::getHash(vector<string> input)
{
	int hash = 0;

	for (int i = 0; i < input.size(); ++i)
	{
		for (int j = 0; j < input[i].size(); ++j)
		{
			hash += (input[i][j] - 65) + i + j;
		}
	}

	return hash;
}

int main()
{
	vector<string> coll;
	coll.push_back("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	coll.push_back("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	coll.push_back("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	coll.push_back("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	coll.push_back("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	coll.push_back("ABCDEFGHIJKLMNOPQRSTUVWXYZ");

	ArrayHash test;

	cout << test.getHash(coll) << endl;

	return EXIT_SUCCESS;
}