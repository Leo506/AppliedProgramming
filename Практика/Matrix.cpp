#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int* getMaxIndexes(int* array, int size, int* countOfMax);
int* getMinIndexes(int* array, int size, int* countOfMin);
void showMaxAndMin(int columnIndex, int* maxIndexes, int maxCount, int* minIndexes, int minCount);

int main()
{
	const int row = 10;
	const int column = 15;

	int** matrix = new int* [column];
	for (int i = 0; i < column; i++)
	{
		matrix[i] = new int[row];
	}

	srand(time(NULL));

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			int value = rand() % 10 + 1;
			matrix[j][i] = value;
			cout.width(3);
			cout << value << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < column; i++)
	{
		int maxCount;
		int minCount;
		int* maxIndexes = getMaxIndexes(matrix[i], row, &maxCount);
		int* minIndexes = getMinIndexes(matrix[i], row, &minCount);
		showMaxAndMin(i, maxIndexes, maxCount, minIndexes, minCount);
		delete[] maxIndexes;
		delete[] minIndexes;
	}


	for (int i = 0; i < column; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}

int* getMaxIndexes(int* array, int size, int* countOfMax)
{
	int maxIndex = size - 1;
	*countOfMax = 1;

	for (int i = 0; i < size; i++)
	{
		if (array[i] > array[maxIndex])
		{
			maxIndex = i;
			*countOfMax = 1;
		}

		else if (array[i] == array[maxIndex] && i != maxIndex)
		{
			(*countOfMax)++;
		}
	}

	int* indexes = new int[*countOfMax];
	for (int i = 0, j = 0; i < size; i++)
	{
		if (array[i] == array[maxIndex])
		{
			indexes[j] = i;
			j++;
		}
	}

	return indexes;
}


int* getMinIndexes(int* array, int size, int* countOfMin)
{
	int minIndex = size - 1;
	*countOfMin = 1;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < array[minIndex])
		{
			minIndex = i;
			*countOfMin = 1;
		}

		else if (array[i] == array[minIndex] && i != minIndex)
		{
			(*countOfMin)++;
		}
	}

	int* indexes = new int[*countOfMin];
	for (int i = 0, j = 0; i < size; i++)
	{
		if (array[i] == array[minIndex])
		{
			indexes[j] = i;
			j++;
		}
	}

	return indexes;
}

void showMaxAndMin(int columnIndex, int* maxIndexes, int maxCount, int* minIndexes, int minCount)
{
	cout << "\n" << columnIndex + 1 << " column\n";
	cout << "max= ";
	for (int i = 0; i < maxCount; i++)
	{
		cout << "[" << columnIndex + 1 << "][" << maxIndexes[i] << "]" << " ";
	}
	cout << endl;
	cout << "min= ";
	for (int i = 0; i < minCount; i++)
	{
		cout << "[" << columnIndex + 1 << "][" << minIndexes[i] << "]" << " ";
	}
	cout << endl;

}