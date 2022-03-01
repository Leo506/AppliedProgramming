#include <iostream>
#include <cmath>

using namespace std;

double recursiveFunction(int n);
double commonFunction(int n);

int main()
{
    cout << "Recursive function: "  << recursiveFunction(10) << endl;
    cout << "Common function: " << commonFunction(10) << endl;
    return 0;
}


double recursiveFunction(int n)
{
    if (n == 0)
    {
        return 0;
    }

    double value = (abs(cos(pow(n, 2) - 3.8)) / 4.5) - 9.7 * sin(n - 3.1);
    value += recursiveFunction(n-1);
    return value;
}

double commonFunction(int n)
{
    double sum = 0;
    for (int i=1; i<=n; i++)
    {
        sum += (abs(cos(pow(i, 2) - 3.8) / 4.5)) - 9.7 * sin(i - 3.1);
    }

    return sum;
}

