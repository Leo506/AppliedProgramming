#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    cin >> n;

    if (n % 2 == 0 || n == 1)
    {
        cout << "Wrong number\n";
        return 0;
    }


    const int offset = 4;
    const int base = 1;

    
    cout.setf(ios::fixed);
    cout.precision(0);
    cout << n*n - offset * ((n - base) / 2) << endl;

    return 0;
}
