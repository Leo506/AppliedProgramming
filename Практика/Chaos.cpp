//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a;  // Кол-во бактерий на старте
//	int b;  // В инкубаторе
//	int c;  // На опыты
//	int d;  // Мест в контейнере
//	int k;  // Кол-во дней эксперимента
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