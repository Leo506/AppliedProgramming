#include <iostream>

using namespace std;

int main()
{

    const int NOMINAL_VALUES[] = { 50, 20, 10, 5, 1 };
    const int NOMINAL_COUNT = 5;

    int money;
    cin >> money;

    if (money <= 0)
    {
        cout << "Wrong number\n";
        return 0;
    }

    for (int i = 0; i < NOMINAL_COUNT; i++)
    {
        int tmp = money / NOMINAL_VALUES[i];
        money -= tmp * NOMINAL_VALUES[i];
        
        for (int j = 0; j < tmp; j++)
        {
            cout << NOMINAL_VALUES[i] << " ";
        }

	if (money == 0)
	{
	    break;
	}
    }

    return 0;
}
