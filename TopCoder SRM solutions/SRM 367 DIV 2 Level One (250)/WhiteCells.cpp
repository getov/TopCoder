#include <iostream>
#include <string>
#include <vector>

using namespace std;

class WhiteCells
{
	public:

		int countOccupied(vector<string> );
};

int WhiteCells::countOccupied(vector<string> board)
{
	int occupied = 0;

	for (int i = 0; i < board.size(); ++i)
	{
		if(i % 2 == 0)
		{
			for (int j = 0; j < board.size(); j += 2)
			{
				if (board[i][j] == 'F')
				{
					++occupied;
				}
			}
		}
		else
		{
			for (int j = 1; j < board.size(); j += 2)
			{
				if (board[i][j] == 'F')
				{
					++occupied;
				}
			}
		}
		
	}

	return occupied;
}

int main()
{
	WhiteCells test;

	vector<string> coll;
	coll.push_back("FFFFFFFF");
	coll.push_back("........");
	coll.push_back("........");
	coll.push_back("........");
	coll.push_back("........");
	coll.push_back("........");
	coll.push_back("........");
	coll.push_back("........");

	cout << test.countOccupied(coll) << endl;

	return EXIT_SUCCESS;
}