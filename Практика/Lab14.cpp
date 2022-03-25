#include <iostream>
#include <cmath>

using namespace std;

int** createMatrix(int columns, int rows);
void showMatrix(int** matrix, int rows, int columns);
int getCharacteristic(int* array, int size);

int main()
{
	int countOfRows, countOfColumns;

	cout << "Enter a number of rows: ";
	cin >> countOfRows;

	cout << "Enter a number of columns: ";
	cin >> countOfColumns;

	cout << "Enter elements of matrix: ";

	int** matrix = createMatrix(countOfColumns, countOfRows);

	for (int i = 0; i < countOfColumns; i++)
	{
		for (int j = 0; j < countOfRows; j++)
		{
			cin >> matrix[i][j];
		}
	}

	showMatrix(matrix, countOfRows, countOfColumns);

	for (int i = 0; i < countOfColumns - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < countOfColumns; j++)
		{
			if (getCharacteristic(matrix[j], countOfRows) < getCharacteristic(matrix[minIndex], countOfRows))
			{
				minIndex = j;
			}
		}

		int* tmp = matrix[i];
		matrix[i] = matrix[minIndex];
		matrix[minIndex] = tmp;
	}

	showMatrix(matrix, countOfRows, countOfColumns);

	cout << "Characteristics: ";
	for (int i = 0; i < countOfColumns; i++)
	{
		cout << getCharacteristic(matrix[i], countOfRows) << " ";
	}
	cout << endl;

	for (int i = 0; i < countOfColumns; i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;

	return 0;
}


int** createMatrix(int columns, int rows)
{
	int** matrix = new int* [columns];
	for (int i = 0; i < columns; i++)
	{
		matrix[i] = new int[rows];
	}

	return matrix;
}


void showMatrix(int** matrix, int rows, int columns)
{
	cout << "\n\tMatrix\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout.width(5);
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int getCharacteristic(int* array, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0 && array[i] % 2 != 0)
		{
			sum += abs(array[i]);
		}
	}

	return sum;
}