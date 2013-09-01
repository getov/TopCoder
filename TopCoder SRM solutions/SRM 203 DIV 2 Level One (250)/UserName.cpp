#include <iostream>
#include <vector>
#include <string>

using namespace std;

class UserName
{
	public:
		string newMember(vector<string> existingNames, string newName);
};

string UserName::newMember(vector<string> existingNames, string newName)
{
	bool isExisting = false;
	int ending = 0; // must be long long int for topcoder gcc compiler
	string temp;
	string tempName = newName;

	while (true)
	{
		for (int i = 0; i < existingNames.size(); ++i)
		{
			if (tempName == existingNames[i])
			{
				isExisting = true;
				break;
			}
		}

		if (isExisting)
		{
			ending++;
			temp = to_string(ending);
			tempName = newName + temp;
			isExisting = false;
		}
		else
		{
			return tempName;
		}
	}
}

int main()
{
	UserName test;
	vector<string> coll;
	coll.push_back("MasterOfDisaster");
	coll.push_back("DingBat");
	coll.push_back("Orpheus");
	coll.push_back("WolfMan");
	coll.push_back("MrKnowItAll");
	coll.push_back("TygerTyger");
	coll.push_back("TygerTyger1");

	cout << test.newMember(coll, "TygerTyger") << endl;

	return EXIT_SUCCESS;
}