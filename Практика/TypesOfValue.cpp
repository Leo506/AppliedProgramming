#include <iostream>
#include <cmath>

using namespace std;

double arithmaticMean(double* array, int size);
double harmonicMean(double* array, int size);
double geometricMean(double* array, int size);
double rootMeanSquare(double* array, int size);

int main()
{
	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);

	double ArithmeticMean = arithmaticMean(vector, n);
	double HarmonicMean = harmonicMean(vector, n);
	double GeometricMean = geometricMean(vector, n);
	double RootMeanSquare = rootMeanSquare(vector, n);


	cout << "Arithmetic  Mean  =  " << ArithmeticMean << endl;
	cout << "Harmonic  Mean     =  " << HarmonicMean << endl;
	cout << "Geometric  Mean   =  " << GeometricMean << endl;
	cout << "RootMean  Square  =  " << RootMeanSquare << endl;

	cout << endl;
	return 0;
}

double arithmaticMean(double* array, int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum / size;
}

double harmonicMean(double* array, int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += 1. / array[i];
	}

	return size / sum;
}

double geometricMean(double* array, int size)
{
	double product = 1;
	for (int i = 0; i < size; i++)
	{
		product *= array[i];
	}

	return pow(product, 1. / size);
}

double rootMeanSquare(double* array, int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i] * array[i];
	}

	return sqrt(sum / size);
}