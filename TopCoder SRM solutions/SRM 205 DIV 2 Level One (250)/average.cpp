#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Average
{
	public:
		int belowAvg(vector<int> math, vector<int> verbal);
};

int Average::belowAvg(vector<int> math, vector<int> verbal)
{
	vector<int> sum;
	int counter = 0;

	for (int i = 0; i < math.size(); ++i)
	{
		sum.push_back(math[i] + verbal[i]);
	}

	double average = accumulate(sum.begin(), sum.end(), 0) / sum.size();

	for (int i = 0; i < sum.size(); ++i)
	{
		if (sum[i] < average)
		{
			++counter;
		}
	}

	return counter;
}

int main()
{
	Average test;

	vector<int> mathColl;
	mathColl.push_back(200);
	mathColl.push_back(250);
	mathColl.push_back(700);
	mathColl.push_back(700);

	vector<int> verbalColl;
	verbalColl.push_back(400);
	verbalColl.push_back(400);
	verbalColl.push_back(400);
	verbalColl.push_back(400);

	cout << test.belowAvg(mathColl, verbalColl) << endl;

	return EXIT_SUCCESS;
}