#include <iostream>

using namespace std;

int** createSquareMatrix(int size);
int sumTop(int** matrix, int size);
int sumBottom(int** matrix, int size);
int sumLeft(int** matrix, int size);
int sumRight(int** matrix, int size);

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

	int topSum = sumTop(matrix, size);

	int bottomSum = sumBottom(matrix, size);

	int leftSum = sumLeft(matrix, size);

	int rightSum = sumRight(matrix, size);
	

	cout << "top: " << topSum << endl;
	cout << "right: " << rightSum<< endl;
	cout << "down: " << bottomSum<< endl;
	cout << "left: " << leftSum<< endl;

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

int sumTop(int** matrix, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		bool hasElements = false;
		for (int j = i + 1; j < size - i - 1; j++)
		{
			sum += matrix[i][j];
			hasElements = true;
		}

		if (!hasElements)
		{
			break;
		}
	}
	
	return sum;
}

int sumBottom(int** matrix, int size)
{
	int sum = 0;
	for (int i = size - 1; i >= 0; i--)
	{
		bool hasElements = false;
		for (int j = size - i; j < i; j++)
		{
			sum += matrix[i][j];
			hasElements = true;
		}

		if (!hasElements)
		{
			break;
		}
	}

	return sum;
}


int sumLeft(int** matrix, int size)
{
	int sum = 0;
	for (int i = 1; i < size - 1; i++)
	{
		bool hasElements = false;
		for (int j = 0; j < i && j < size - i - 1; j++)
		{
			sum += matrix[i][j];
			hasElements = true;
		}

		if (!hasElements)
		{
			break;
		}
	}

	return sum;
}


int sumRight(int** matrix, int size)
{
	int sum = 0;
	for (int i = 1; i < size - 1; i++)
	{
		bool hasElements = false;
		for (int j = size - 1; j > size - i - 1 && j > i; j--)
		{
			sum += matrix[i][j];
			hasElements = true;
		}

		if (!hasElements)
		{
			break;
		}
	}

	return sum;
}