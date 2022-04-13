#include <iostream>

using namespace std;

struct Employer
{
	int distance;
	int index;
};

struct Taxi
{
	int cost;
	int index;
};

void boobleSort(Employer* array, int n);
void boobleSort(Taxi* array, int n);
int getIndex(Employer* array, int n, int value);

int main()
{
	int n;
	cin >> n;

	Employer* employers = new Employer[n];
	Taxi* taxies = new Taxi[n];

	for (int i = n - 1; i >= 0; i--)
	{
		cin >> employers[i].distance;
		employers[i].index = n - i - 1;
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cin >> taxies[i].cost;
		taxies[i].index = n - i - 1;
	}

	boobleSort(employers, n);
	boobleSort(taxies, n);

	for (int i = 0; i < n; i++)
	{
		int employerIndex = getIndex(employers, n, i);
		cout << taxies[employerIndex].index + 1;
		if (i != n - 1)
		{
			cout << " ";
		}
	}

	delete[] employers;
	delete[] taxies;

	return 0;
}

void boobleSort(Employer* array, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (array[j].distance > array[j + 1].distance)
			{
				Employer tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}

void boobleSort(Taxi* array, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (array[j].cost < array[j + 1].cost)
			{
				Taxi tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}


int getIndex(Employer* array, int n, int value)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i].index == value)
		{
			return i;
		}
	}
	return -1;
}