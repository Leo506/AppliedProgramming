#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//int* sort(int* array, int size);
void quickSort(int* numbers, int left, int right);
int* addElement(int* array, int size, int value);
void showVector(const int* array, int size);

int main()
{
	int n;
	cout << "Enter an amount of stones: ";
	cin >> n;

	int* stoneWights = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		stoneWights[i] = rand() % 101;
	}

	quickSort(stoneWights, 0, n - 1);

	int* firstHeap = nullptr;
	int weightOnFirstHeap = 0;
	int stonesInFirstHeap = 0;

	int* secondHeap = nullptr;
	int weightOnSecondHeap = 0;
	int stonesInSecondHeap = 0;

	for (int i = n - 1; i >= 0; i--)
	{
		if (weightOnFirstHeap <= weightOnSecondHeap)
		{
			firstHeap = addElement(firstHeap, stonesInFirstHeap, stoneWights[i]);
			weightOnFirstHeap += stoneWights[i];
			stonesInFirstHeap++;
		}
		else
		{
			secondHeap = addElement(secondHeap, stonesInSecondHeap, stoneWights[i]);
			weightOnSecondHeap += stoneWights[i];
			stonesInSecondHeap++;
		}
	}

	cout << "First heap: ";
	showVector(firstHeap, stonesInFirstHeap);
	cout << "First heap weight: " << weightOnFirstHeap << endl << endl;

	cout << "Second heap: ";
	showVector(secondHeap, stonesInSecondHeap);
	cout << "Second heap weight: " << weightOnSecondHeap << endl << endl;

	double ratio = (double)weightOnFirstHeap / weightOnSecondHeap;
	if (ratio > 2 || ratio < 0.5)
	{
		cout << "Weights of heaps are different more then 2 times";
	}

	delete[] stoneWights;
	delete[] firstHeap;
	delete[] secondHeap;

	return 0;
}

void showVector(const int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int* addElement(int* array, int size, int value)
{
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = array[i];
	}

	newArray[size] = value;
	delete[] array;

	return newArray;
}

//int* sort(int* array, int size)
//{
//	// Базовый случай
//	if (size < 2)
//	{
//		return array;
//	}
//
//	int pivotIndex = size / 2;
//	int pivot = array[pivotIndex];
//
//	int countOfLess = 0;
//	int countOfGreater = 0;
//	int* lessArray = nullptr;
//	int* greaterArray = nullptr;
//	for (int i = 0; i < size; i++)
//	{
//		if (i == pivotIndex)
//		{
//			continue;
//		}
//
//		if (array[i] <= pivot)
//		{
//			lessArray = addElement(lessArray, countOfLess, array[i]);
//			countOfLess++;
//		}
//		else
//		{
//			greaterArray = addElement(greaterArray, countOfGreater, array[i]);
//			countOfGreater++;
//		}
//	}
//
//	lessArray = sort(lessArray, countOfLess);
//	greaterArray = sort(greaterArray, countOfGreater);
//
//	int* returnArray = new int[size];
//	for (int i = 0; i < countOfLess; i++)
//	{
//		returnArray[i] = lessArray[i];
//	}
//
//	returnArray[countOfLess] = pivot;
//
//	for (int i = countOfLess + 1; i < size; i++)
//	{
//		returnArray[i] = greaterArray[i - countOfLess - 1];
//	}
//
//	delete[] lessArray;
//	delete[] greaterArray;
//
//	return returnArray;
//}

void quickSort(int* numbers, int left, int right) {
	int pivot;
	int l_hold = left;
	int r_hold = right;
	pivot = numbers[left];
	while (left < right) {
		while ((numbers[right] >= pivot) && (left < right)) {
			right--;
		}
		if (left != right) {
			numbers[left] = numbers[right];
			left++;
		}
		while ((numbers[left] <= pivot) && (left < right)) {
			left++;
		}
		if (left != right) {
			numbers[right] = numbers[left];
			right--;
		}
	}
	numbers[left] = pivot;
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot) {
		quickSort(numbers, left, pivot - 1);
	}
	if (right > pivot) {
		quickSort(numbers, pivot + 1, right);
	}
}