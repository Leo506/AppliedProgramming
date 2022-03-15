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


    cout << n*n - 2*n - 2 << endl;

    return 0;
}
