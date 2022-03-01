#include <iostream>
using namespace std;

double factorial(double n);


int main()
{
    double n;
    cin >> n;

    if (n < 0)
    {
        cout << "Wrong number";
        return 0;
    }

    cout.setf(ios::fixed);
    cout.precision(0);
    cout << factorial(n) << endl;
    return 0;
}


double factorial(double n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n-1);
}
