#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BinaryCode
{
	private:
		string message;
		char decoded[52];
	public:
		vector<string> decode(string message)
		{
			vector<string> stack;

			decoded[0] = '0';
			for (int i = 0; i < message.length(); ++i)
			{
				//message[i] = decoded[i - 1] + decoded[i] + decoded[i + 1];
				decoded[i] = (message[i] - '0') - ((decoded[i - 1] - '0') + (decoded[i + 1] - '0'));
			}
			stack.push_back(decoded);

			return stack;
		}
};

int main()
{
	BinaryCode one;
	vector<string> getVec = one.decode("123");
	
	for (auto i = getVec.begin(); i != getVec.end(); ++i)
	{
		cout << *i << endl;
	}

	return 0;
}