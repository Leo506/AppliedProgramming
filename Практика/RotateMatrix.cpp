#include <iostream>

using namespace std;

int** createSquareMatrix(int size);

int main()
{
	int n;
	cin >> n;

	int** matrix = createSquareMatrix(n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}

    int** rotatedMatrix = createSquareMatrix(n);
    for (int i = 0; i < n; i++)
    {
        rotatedMatrix[n - i - 1] = matrix[i];
    }

	for (int row = 0; row < n; row++)
	{
		for (int column = 0; column < n; column++)
		{
			cout << rotatedMatrix[column][row];
			if (column != n - 1)
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;

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
