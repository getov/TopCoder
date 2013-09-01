#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ValueAddedTax
{
	public:	
		double calculateFinalPrice(string product, int price, vector<string> food);
};

double ValueAddedTax::calculateFinalPrice(string product, int price, vector<string> food)
{
	double finalPrice;

	for (int i = 0; i < food.size(); ++i)
	{
		if (product == food[i])
		{
			finalPrice = price + 0.1 * price;
			return finalPrice;
		}
	}

	finalPrice = price + 0.18 * price;
	return finalPrice;
}

int main()
{
	vector<string> coll;
	coll.push_back("a");
	coll.push_back("b");
	coll.push_back("c");

	ValueAddedTax test;

	cout << test.calculateFinalPrice("abc", 57, coll) << endl;

	return EXIT_SUCCESS;
}