//#include <iostream>
//
//using namespace std;
//
//int** createSquareMatrix(int side);
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int** matrix = createSquareMatrix(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//
//	int middleIndex = n / 2;
//	int maxElement = matrix[0][0];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= (i <= middleIndex ? i : n - i - 1); j++)
//		{
//			if (matrix[i][j] > maxElement)
//			{
//				maxElement = matrix[i][j];
//			}
//		}
//
//		for (int j = n - 1; j >= (i <= middleIndex ? n - i - 1 : i); j--)
//		{
//			if (matrix[i][j] > maxElement)
//			{
//				maxElement = matrix[i][j];
//			}
//		}
//	}
//
//	cout << maxElement << endl;
//
//	return 0;
//}
//
//int** createSquareMatrix(int side)
//{
//	int** matrix = new int* [side];
//	for (int i = 0; i < side; i++)
//	{
//		matrix[i] = new int[side];
//	}
//	
//	return matrix;
//}