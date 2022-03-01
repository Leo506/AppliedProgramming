#include <iostream>
using namespace std;

double fibonachy(int);

int main()
{
    int n;
    cin >> n;

    if (n <= 0)
    {
        cout << "Wrong number\n";
        return 0;
    }


    cout.setf(ios::fixed);
    cout.precision(0);
    cout << fibonachy(n) << endl;
    return 0;
}

double fibonachy(int n)
{
    double first = 1;
    double second = 1;

    double result = 1;

    for (int i = 0; i < n - 2; i++)
    {
        result = first + second;
        first = second;
        second = result;
    }

    return result;
}
