#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n > 63 || n < 0)
    {
        cout << "Wrong number\n";
        return 0;
    }

    double result = 1;

    for (int i = 0; i < n; i++)
    {
        result /= 2;
    }

    cout.setf(ios::fixed);
    cout.precision(20);
    cout << result;
    return 0;
}
