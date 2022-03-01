#include <iostream>
using namespace std;

int main()
{
    int year, month, day;
    cin >> year;
    cin >> month;
    cin >> day;

    bool canCount = true;

    // Проверка года
    if (year / 1000 + year / 100 < 20)
    {
        cout << "Year must be in XX-XXI century\n";
        canCount = false;
    }

    // Проверка месяца
    if (month < 0 || month > 12)
    {
        cout << "Wrong month\n";
        canCount = false;
    }

    // Проверка дней
    if (day < 1)
    {
        cout << "Wrong day\n";
        canCount = false;
    }
    else
    {
        switch (month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (day > 31)
                {
                    cout << "Wrong day\n";
                    canCount = false;
                }
                break;

            case 2:
                if (year % 4 == 0 && day > 29)
                {
                    cout << "Wrong day\n";
                    canCount = false;
                }
                else if (day > 28)
                {
                    cout << "Wrong day\n";
                    canCount = false;
                }
                break;

            default:
                if (day > 30)
                {
                    cout << "Wrong day\n";
                    canCount = false;
                }
                break;
        }
    }

    if (canCount)
    {
        month -= 2;
        if (month <= 0)
        {
            month += 12;
            year--;
        }

        month *= 83;
        month /= 32;

        month += day;

        month += year;

        month += year / 4;

        month -= year / 100;

        month += year / 400;

        int result = month % 7;

        cout << result << endl;
    }

    return 0;
}
