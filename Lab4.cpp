#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double e = 0.0001;

    double beforeNumber, currentNumber;
    int n = 1;

    beforeNumber = 1;
    bool condition;

    do
    {
        n++;
        currentNumber = pow(-1, n - 1) / pow(n, n);
        condition = abs(currentNumber - beforeNumber) > e;
        if (condition)
        {
            beforeNumber = currentNumber;
        }

    } while (condition);

    cout << "a(n) = " << currentNumber << " a(n - 1) = " << beforeNumber << " n = " << n << endl;

    n = 2;
    beforeNumber = 1;
    currentNumber = pow(-1, n - 1) / pow(n, n);
    condition = abs(currentNumber - beforeNumber) > e;

    while (condition)
    {
        n++;
        beforeNumber = currentNumber;
        currentNumber = pow(-1, n - 1) / pow(n , n);
        condition = abs(currentNumber - beforeNumber) > e;
    }

    cout << "a(n) = " << currentNumber << " a(n-1) = " << beforeNumber << " n = " << n << endl;

    return 0;
}
