#include <iostream>
#include <string>

using namespace std;

class Time 
{
	private:
		int seconds;

	public:
		char result[20];
		string whatTime(int seconds)
		{
			sprintf_s(result, "%u:%u:%u", seconds / (60 * 60), (seconds / 60) % 60, (seconds % 60));
			return result;
		}
};

int main()
{
	Time nuts;

	cout << nuts.whatTime(1337) << endl;

	return 0;
}