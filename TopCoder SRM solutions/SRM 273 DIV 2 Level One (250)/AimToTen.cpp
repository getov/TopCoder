#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class AimToTen
{
	public:
		int need(vector<int> marks);
};

int AimToTen::need(vector<int> marks)
{
	float average = static_cast<float>(accumulate(marks.begin(), marks.end(), 0)) / marks.size();

	int counter = 0;
	
	while (average < 9.5)
	{
		marks.push_back(10);
		counter++;
		average = static_cast<float>(accumulate(marks.begin(), marks.end(), 0)) / marks.size();
	}

	return counter;
}

int main()
{
	AimToTen test;

	vector<int> coll;
	coll.push_back(8);
	coll.push_back(9);
	/*coll.push_back(10);
	coll.push_back(9);*/

	cout << test.need(coll) << endl;

	return EXIT_SUCCESS;
}