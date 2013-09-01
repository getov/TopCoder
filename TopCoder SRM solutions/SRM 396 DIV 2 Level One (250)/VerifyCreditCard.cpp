#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class VerifyCreditCard
{
	public:
		string checkDigits(string cardNumber);
};

string VerifyCreditCard::checkDigits(string cardNumber)
{
	long long cardNum = stol(cardNumber);

	vector<int> coll;

	while (cardNum / 10 != 0)
	{
		coll.push_back(cardNum % 10);
		cardNum = cardNum / 10;
	}
	coll.push_back(cardNum);

	reverse(coll.begin(), coll.end());

	for (int i = 0; i < coll.size(); ++i)
	{
		if (coll.size() % 2 == 0)
		{
			if (i % 2 == 0)
			{
				coll[i] *= 2;
			}
		}
		else
		{
			if (i % 2 != 0)
			{
				coll[i] *= 2;
			}
		}
	}

	long long sum = 0;

	for (int i = 0; i < coll.size(); ++i)
	{
		if (coll[i] < 10)
		{
			sum += coll[i];
		}
		else
		{
			while (coll[i] / 10 != 0)
			{
				sum += coll[i] % 10;
				coll[i] = coll[i] / 10;
			}
			sum += coll[i];
		}
	}

	cout << sum << endl;


	if (sum % 10 == 0)
	{
		return "VALID";
	}
	else
	{
		return "INVALID";
	}
}

int main()
{
	VerifyCreditCard test;

	cout << test.checkDigits("542987223412") << endl;

	return EXIT_SUCCESS;
}