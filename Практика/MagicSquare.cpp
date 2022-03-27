#include <iostream>

using namespace std;

int** createSquareMatrix(int size);
bool contains(int** matrix, int size, int value);
void freeMatrix(int** matrix, int size);
bool checkRows(int** matrix, int size, int* sum);
bool checkColumns(int** matrix, int size, int* sum);
bool checkDiagonals(int** matrix, int size, int* sum);
bool checkSum(int* array, int size);


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

    for (int i = 1; i <= n*n; i++)
    {
        if (!contains(matrix, n, i))
        {
            cout << "NO";
            freeMatrix(matrix, n);
            return 0;
        }
    }

	int rowsSum;
	bool rowsCheckResult = checkRows(matrix, n, &rowsSum);

	int columnsSum;
	bool columnsCheckResult = checkColumns(matrix, n, &columnsSum);

	int diagonalSum;
	bool diagonalsCheckResult = checkDiagonals(matrix, n, &diagonalSum);

	if (!rowsCheckResult || !columnsCheckResult || !diagonalsCheckResult)
	{
		cout << "NO";
	}

	else if ((rowsSum == columnsSum) && (columnsSum == diagonalSum))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	freeMatrix(matrix, n);

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

bool contains(int** matrix, int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] == value)
            {
                return true;
            }
        }
    }

    return false;
}

void freeMatrix(int** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;
}

bool checkRows(int** matrix, int size, int* sum)
{
	int* sumArray = new int[size];
	for (int row = 0; row < size; row++)
	{
		int sum = 0;
		for (int i = 0; i < size; i++)
		{
			sum += matrix[row][i];
		}
		sumArray[row] = sum;
	}

	bool result = checkSum(sumArray, size);
	if (result)
	{
		*sum = sumArray[0];
	}
	delete[] sumArray;

	return result;
}

bool checkColumns(int** matrix, int size, int* sum)
{
	int* sumArray = new int[size];
	for (int column = 0; column < size; column++)
	{
		int sum = 0;
		for (int row = 0; row < size; row++)
		{
			sum += matrix[row][column];
		}
		sumArray[column] = sum;
	}

	bool result = checkSum(sumArray, size);
	if (result)
	{
		*sum = sumArray[0];
	}
	delete[] sumArray;

	return result;
}


bool checkDiagonals(int** matrix, int size, int* sum)
{
	int* sumArray = new int[2];
	int sumDiag = 0;
	for (int i = 0; i < size; i++)
	{
		sumDiag += matrix[i][i];
	}

	sumArray[0] = sumDiag;

	sumDiag = 0;

	for (int i = size - 1; i >= 0; i--)
	{
		sumDiag += matrix[i][i];
	}

	sumArray[1] = sumDiag;

	bool result = checkSum(sumArray, 2);
	if (result)
	{
		*sum = sumArray[0];
	}
	delete[] sumArray;

	return result;
}


bool checkSum(int* array, int size)
{
	for (int i = 1; i < size; i++)
	{
		if (array[i] != array[i - 1])
		{
			return false;
		}
	}

	return true;
}