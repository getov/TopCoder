#include <iostream>

using namespace std;

class NinjaTurtles
{
	public:
		int countOpponents(int P, int K);
};

int NinjaTurtles::countOpponents(int P, int K)
{
	for (int N = 0; N <= 4000000; ++N)
	{
      if (floor(N / 3) + 3 * (floor(N / K)) == P)
	  {
		  return N;
	  }
    }

    return -1;
}

int main()
{
	NinjaTurtles test;

	cout << test.countOpponents(13, 6) << endl;

	return EXIT_SUCCESS;
}