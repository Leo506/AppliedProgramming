#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;

    bool rightIp = true;

    if (num1 < 1 || num1 > 255)
    {
        cout << "First is not valid\n";
        rightIp = false;
    }

    if (num2 < 1 || num2 > 255)
    {
        cout << "Second is not valid\n";
        rightIp = false;
    }

    if (num3 < 1 || num3 > 255)
    {
        cout << "Third is not valid\n";
        rightIp = false;
    }

    if (num4 < 1 || num4 > 255)
    {
        cout << "Fourth is not valid\n";
        rightIp = false;
    }
    
    if (rightIp)
    {
        cout << num1 << "." << num2 << "." << num3 << "." << num4;
    }

    return 0;
}
