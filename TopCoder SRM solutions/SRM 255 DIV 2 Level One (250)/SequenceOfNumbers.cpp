#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class SequenceOfNumbers
{
	public:

		vector<string> rearrange(vector<string>);
};

vector<string> SequenceOfNumbers::rearrange(vector<string> sequence)
{
	sort(sequence.begin(), sequence.end(),
		[] (string x, string y){
			if (x.size() == y.size())
			{
				return x < y;
			}
			return x.size() < y.size();
	    });

	return sequence;
}

int main()
{
	vector<string> coll;
	coll.push_back("150");
	coll.push_back("174");
	coll.push_back("23");
	coll.push_back("578");
	coll.push_back("71");
	coll.push_back("9");

	SequenceOfNumbers test;

	vector<string> get = test.rearrange(coll);
	
	for (auto i = get.begin(); i != get.end(); ++i)
	{
		cout << *i << endl;
	}

	return EXIT_SUCCESS;
}