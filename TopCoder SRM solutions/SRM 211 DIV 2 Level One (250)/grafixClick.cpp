#include <iostream>
#include <vector>

using namespace std;

class grafixClick
{
	public:
		vector<int> checkSaveButton(vector<int> mouseRows, vector<int> mouseCols);
};

vector<int> grafixClick::checkSaveButton(vector<int> mouseRows, vector<int> mouseCols)
{
	vector<int> indeces;

	for (int i = 0; i < mouseRows.size(); ++i)
	{
		if ((mouseRows[i] >= 20 && mouseRows[i] <= 39) && 
			(mouseCols[i] >= 50 && mouseCols[i] <= 99))
		{
			indeces.push_back(i);
		}
	}

	return indeces;
}

int main()
{
	vector<int> rows;
	rows.push_back(0);
	rows.push_back(100);
	rows.push_back(399);

	vector<int> cols;
	cols.push_back(0);
	cols.push_back(200);
	cols.push_back(599);

	grafixClick test;

	vector<int> index = test.checkSaveButton(rows, cols);

	for (auto i = index.begin(); i != index.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}