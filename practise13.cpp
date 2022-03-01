#include <iostream>
using namespace std;

int main()
{
    double price;
    double tax;

    cin >> price;
    cin >> tax;

    bool canCount = true;

    if (price < 0)
    {
        cout << "Price can not be less then 0\n";
        canCount = false;
    }

    if (tax <= 0)
    {
        cout << "Tax can not be less or equal 0\n";
        canCount = false;
    }

    if (tax >= 100)
    {
        cout << "Tax can not be more or equal 100\n";
        canCount = false;
    }

    if (canCount)
    {
        double netPrice = price / (1 + tax / 100);
        double taxValue = netPrice * (tax / 100);

        cout << "Net price: " << netPrice << endl
            << "Tax value: " << taxValue << endl;
    }

    return 0;
}
