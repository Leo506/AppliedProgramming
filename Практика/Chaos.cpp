//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a;  // ���-�� �������� �� ������
//	int b;  // � ����������
//	int c;  // �� �����
//	int d;  // ���� � ����������
//	int k;  // ���-�� ���� ������������
//
//	cin >> a >> b >> c >> d >> k;
//
//	for (int i = 0; i < k; i++)
//	{
//		a *= b;
//		
//		a -= (a >= c ? c : a);
//		if (!a)
//		{
//			break;
//		}
//
//		a -= (a > d ? (a - d) : 0);
//	}
//
//	cout << a << endl;
//
//	return 0;
//}