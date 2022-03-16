#include <iostream>

using namespace std;

int main()
{
    unsigned short int val;
    cin >> val;
    
    const int BITS_IN_BYTE = 8;

    int countOfIterates = sizeof(unsigned short int) * BITS_IN_BYTE ;

    unsigned short int mirrorVal = 0;
    unsigned short int copyVal = val;

    for (int i = 0; i < countOfIterates; ++i)
    {
        if (!copyVal)
        {
            mirrorVal = mirrorVal << (countOfIterates - i - 1);
            break;
        }

        mirrorVal = mirrorVal | (copyVal & 1);

        if (i != countOfIterates - 1)
        {
            mirrorVal <<= 1;
            copyVal >>= 1;
        }
    }


    if (val == mirrorVal)
    {
        cout << val << " is a bitwise palindrome\n";
    }
    else
    {
        cout << val << " is not a bitwise palindrome\n";
    }

    return 0;
}
