#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if (year >= 1582)
    {
        if (year % 4 != 0)
        {
            cout << "Common year\n";
        }
        else if (year % 100 != 0)
        {
            cout << "Leap year\n";
        }
        else if (year % 400 != 0)
        {
            cout << "Common year\n";
        }
        else
        {
            cout << "Leap year\n";
        }
    }
    else
    {
        cout << "Year less than 1582\n";
    }

    return 0;
}
