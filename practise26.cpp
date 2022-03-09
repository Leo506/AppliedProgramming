#include <iostream>
using namespace std;

int main()
{
	int h;
	cin >> h;

	if (h >=9 || h <= 2)
	{
		cout << "Wrong number\n";
		return 0;
	}
	
	// Up
	for (int j = 0; j < 3; j++)
	{
		cout.width(j == 0 ? h : 20);
		cout << "*";
	}

	cout << endl;

	// Middle
	int first = h - 1;
	int second = 2;
	int width = 16;
	for (int j = 0; j < h - 2; j++)
	{
		for (int k = 0; k < 3; k++)
		{
			cout.width(k == 0 ? first : 20  - second);
			cout << "*";

			cout.width(second);
			cout << "*";
		}

		first--;
		second += 2;
		width-=2;
		cout << endl;
	}

	// Down
	for (int j = 0; j < 3; j++)
	{
		for (int k = 0; k < 1 + 2*(h-1); k++)
		{
			cout << "*";
		}

		cout.width(20 - (2*(h-1)));
	}

	cout << endl;

	return 0;
}
