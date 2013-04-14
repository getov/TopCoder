#include <iostream>
#include <string>

using namespace std;

class CheckFunction
{
	public:

		int newFunction(string code)
		{
			int dashes = 0;
			int num;

			for (int i = 0; i < code.size(); ++i)
			{
				num = static_cast<int>(code[i]) - 48;

				switch (num)
				{
					case 0: dashes += 6;
							break;
					case 1: dashes += 2;
							break;
					case 2: dashes += 5;
							break;
					case 3: dashes += 5;
							break;
					case 4: dashes += 4;
							break;
					case 5: dashes += 5;
							break;
					case 6: dashes += 6;
							break;
					case 7: dashes += 3;
							break;
					case 8: dashes += 7;
							break;
					case 9: dashes += 6;
							break;
				}
			}

			return dashes;
		}
};

int main()
{
	CheckFunction test;

	cout << test.newFunction("0123") << endl;

	return EXIT_SUCCESS;
}