#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* seqOne = new int[n];
	int* seqTwo = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> seqOne[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> seqTwo[i];
	}

	int similar = 100000;
	for (int i = -1000; i <= 1000; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			int testValue = seqOne[j] + i;

			sum += abs(testValue - seqTwo[j]);
		}

		if (sum < similar)
		{
			similar = sum;
		}
	}

	cout << similar;

	delete[] seqOne;
	delete[] seqTwo;

	return 0;
}