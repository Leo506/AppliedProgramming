#include <iostream>
using namespace std;

int main()
{
    const double INCH_PER_METR = 39.37008;
    const int INCH_PER_FOOT = 12;

    // Выбор системы измерений
    int userChoice;
    cin >> userChoice;


    // Выбор метрической системы
    if (!userChoice)
    {
        double metres;
        cin >> metres;

        double inch = metres * INCH_PER_METR;  // Перевод метров в дюймы
        int foot = (int)inch / INCH_PER_FOOT;  // Определяем кол-во футов в дюймах
        inch -= INCH_PER_FOOT * foot;          // Определяем итоговое кол-во дюймов

        cout << foot << "'" << inch << "\"\n";
    }
    else
    {
        int foot;
        double inch;

        cin >> foot;
        cin >> inch;

        if (userChoice == 1)
        {

            double allInch = foot * INCH_PER_FOOT + inch;
            double metres = allInch / INCH_PER_METR;

            cout << metres << "m\n";
        }
        else
            cout << "Wrong metric system\n";
    }

    return 0;
    
}
