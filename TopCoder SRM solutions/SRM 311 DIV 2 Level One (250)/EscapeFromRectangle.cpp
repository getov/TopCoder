#include <iostream>

using namespace std;

class EscapeFromRectangle
{
	public:

		int shortest(int, int, int, int);
};

int EscapeFromRectangle::shortest(int x, int y, int w, int h)
{
	return min(min(x, y), min(w - x, h - y));
}

int main()
{
	EscapeFromRectangle test;

	cout << test.shortest(161, 181, 762, 375) << endl;

	return EXIT_SUCCESS;
}