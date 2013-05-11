#include <iostream>
#include <string>
#include <vector>

using namespace std;

class DiagonalDisproportion
{
	public:

		int getDisproportion(vector<string> matrix);
};

int DiagonalDisproportion::getDisproportion(vector<string> matrix)
{
	int mainDiag = 0;
	int collateralDiag = 0;

	for (int i = 0; i < matrix.size(); ++i)
	{
		mainDiag += (matrix[i][i] - '0');
		collateralDiag += (matrix[i][matrix[i].size() - (i + 1)] - '0');
	}

	return mainDiag - collateralDiag;
}

int main()
{
	DiagonalDisproportion test;

	vector<string> coll;
	coll.push_back("9000");
	coll.push_back("0120");
	coll.push_back("0000");
	coll.push_back("9000");

	cout << test.getDisproportion(coll) << endl;

	return EXIT_SUCCESS;
}