//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int vector[9];
//	int n = sizeof(vector) / sizeof(vector[0]);
//
//	int minValue = 2147483647;
//	int* pointerToMin = nullptr;
//	
//	for (int i = 0; i < n; i++)
//	{
//		int* currentElement = vector + i;
//		cin >> *currentElement;
//
//		if (*currentElement < minValue)
//		{
//			minValue = *currentElement;
//			pointerToMin = currentElement;
//		}
//
//	}
//
//	cout << minValue << endl;
//	cout << pointerToMin - vector << endl;
//
//	return 0;
//}