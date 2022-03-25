#include <iostream>

using namespace std;

int** createSquareMatrix(int size);

int main()
{
	int size;
	cin >> size;

	int** matrix = createSquareMatrix(size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}


	for (int i = 0; i < size; i++)
	{
		int indexToChange = size - i - 1;
		int tmp = matrix[i][i];
		matrix[i][i] = matrix[indexToChange][i];
		matrix[indexToChange][i] = tmp;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j];
			if (j != size - 1)
			{
				cout << " ";
			}
		}

		cout << endl;
	}

	return 0;
}

int** createSquareMatrix(int size)
{
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++)
	{
		matrix[i] = new int[size];
	}

	return matrix;
}