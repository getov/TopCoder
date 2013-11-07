#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class CityMap
{
	public:
		string getLegend(vector<string> cityMap, vector<int> POIs);
};

string CityMap::getLegend(vector<string> cityMap, vector<int> POIs)
{
	vector<char> poi;
	map<char, int> collection;
	map<char, int>::iterator map_iter;
	string result;

	for (int i = 0; i < cityMap.size(); ++i)
	{
		for (int j = 0; j < cityMap[i].size(); ++j)
		{
			if (cityMap[i][j] != '.')
			{
				poi.push_back(cityMap[i][j]);
			}
		}
	}

	for (int i = 0; i < poi.size(); ++i)
	{
		collection.insert(pair<char, int>(poi[i], count(poi.begin(), poi.end(), poi[i]))); 
	}

	for (int i = 0; i < POIs.size(); ++i)
	{
		for (map_iter = collection.begin(); map_iter != collection.end(); ++map_iter)
		{
			if (POIs[i] == map_iter->second)
			{
				result += map_iter->first;
				break;
			}
		}
	}

	return result;
}

int main()
{
	CityMap test;

	vector<string> collCity;
	collCity.push_back("AIAAARRI.......GOAI.");
	collCity.push_back(".O..AIIGI.OAAAGI.A.I");
	collCity.push_back(".A.IAAAARI..AI.AAGR.");
	collCity.push_back("....IAI..AOIGA.GAIA.");
	collCity.push_back("I.AIIIAG...GAR.IIAGA");
	collCity.push_back("IA.AOA....I....I.GAA");
	collCity.push_back("IOIGRAAAO.AI.AA.RAAA");
	collCity.push_back("AI.AAA.AIR.AGRIAAG..");
	collCity.push_back("AAAAIAAAI...AAG.RGRA");
	collCity.push_back(".J.IA...G.A.AA.II.AA");

	vector<int> collPOI;
	collPOI.push_back(16);
	collPOI.push_back(7);
	collPOI.push_back(1);
	collPOI.push_back(35);
	collPOI.push_back(11);
	collPOI.push_back(66);

	cout << test.getLegend(collCity, collPOI) << endl;

	return EXIT_SUCCESS;
}