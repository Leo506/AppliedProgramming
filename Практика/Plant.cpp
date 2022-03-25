//#include <iostream>
//
//using namespace std;
//
//int* addElement(int* array, int size, int element);
//int* removeElement(int* array, int size, int element);
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	if (N <= 0)
//	{
//		cout << "Wrong number\n";
//		return 0;
//	}
//
//	int size = 1;
//	int* agesArray = new int[size];
//	int startAge = 1;
//	agesArray[0] = startAge;
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (agesArray[j] >= 4)
//			{
//				int newAge = 1;
//				agesArray = addElement(agesArray, size, newAge);
//				size++;
//			}
//
//			if (agesArray[j] == 21)
//			{
//				agesArray = removeElement(agesArray, size, agesArray[j]);
//				size--;
//			}
//
//			agesArray[j]++;
//		}
//
//	}
//
//	int countsOfLives = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (agesArray[i] != 2 && agesArray[i] != 22)
//		{
//			countsOfLives++;
//		}
//	}
//	cout << countsOfLives << endl;
//
//	delete[] agesArray;
//
//	return 0;
//}
//
//int* addElement(int* array, int size, int element)
//{
//	int* newArray = new int[size + 1];
//	for (int i = 0; i < size; i++)
//	{
//		newArray[i] = array[i];
//	}
//
//	newArray[size] = element;
//
//	delete[] array;
//
//	return newArray;
//}
//
//int* removeElement(int* array, int size, int element)
//{
//	int* newArray = new int[size - 1];
//
//	for (int newIndex = 0, oldIndex = 0; oldIndex < size && newIndex < size - 1; newIndex++, oldIndex++)
//	{
//		if (array[oldIndex] == element)
//		{
//			oldIndex++;
//			if (oldIndex >= size)
//			{
//				break;
//			}
//		}
//
//		newArray[newIndex] = array[oldIndex];
//	}
//
//	delete[] array;
//
//	return newArray;
//}