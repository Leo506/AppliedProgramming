#include <iostream>

using namespace std;

int main()
{
    unsigned short int val;
    bool ispalindrome = true;

    cin >> val;
    
    const int BITS_IN_BYTE = 8;
    const unsigned short int FOR_FIRST_PART = 32768;
    const unsigned short int FOR_SECOND_PART = 1;

    int size = sizeof(unsigned short int) * BITS_IN_BYTE;

    for (int i = 0; i < size / 2; i++)
    {
        unsigned short int firstPart = val & (FOR_FIRST_PART >> i);
        unsigned short int secondPart = val & (FOR_SECOND_PART << i);

        if ((firstPart && !secondPart) || (!firstPart && secondPart))
        {
            ispalindrome = false;
            break;
        }
    }

    if (ispalindrome)
    {
        cout << val << " is a bitwise palindrome\n";
    }
    else
    {
        cout << val << " is not a bitwise palindrome\n";
    }

    return 0;
}
