#define _USE_MATH_DEFINES  // Для моего компилятора
#include <iostream>
#include <cmath>

using namespace std;

double funcA(double x);
double funcB(double x);
double integral(double (*func)(double x), int points, double a, double b);

int main()
{
	const int N1 = 100;
	const int N2 = 200;


	cout.setf(ios::fixed);
	cout.precision(3);
	cout << "First: " << integral(funcA, N1, 0, M_PI) << endl;

	cout.precision(3);
	cout << "Second: " << integral(funcB, N2, 0, 1) << endl;

	return 0;
}

double funcA(double x)
{
	return (x * sin(x)) / (1 + pow(cos(x), 2));
}

double funcB(double x)
{
	return 1 / (sqrt(4 - x * x));
}

double integral(double (*func)(double x), int points, double a, double b)
{
	double h = (b - a) / points;

	double x = a + h / 2;
	double sum = 0;
	for (int i = 1; i < points; i++)
	{
		sum += func(x);
		x += h;
	}

	return h * sum;
}
