#include <iostream>
using namespace std;

int main()
{
    const int maxSize = 50;
    int n;

    cin >> n;

    if (n <= 1 || n > maxSize)
    {
        cout << "Wrong number\n";
        return 0;
    }

    // Верхняя линия
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n-1)
        {
            cout << "+";
        }
        else
        {
            cout << "-";
        }
    }
    cout << endl;

    // Середина
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Нижния линия
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n-1)
        {
            cout << "+";
        }
        else
        {
            cout << "-";
        }
    
    }

    cout << endl;
    

    return 0;
}
