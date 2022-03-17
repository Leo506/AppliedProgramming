#include <iostream>

using namespace std;

int main()
{
    const int BITS_IN_BYTE = 8;
    const unsigned short int FOR_CHECK = 32768;

    unsigned short int n;
    unsigned short int copyN;

    cin >> n;
    copyN = n;

    int startIndex;
    int size = sizeof(unsigned short) * BITS_IN_BYTE;
    for (startIndex = 0; startIndex < size; startIndex++)
    {
        if (((n << startIndex) & FOR_CHECK))
        {
            break;
        }
    }
    
    startIndex = size - 1 - startIndex;

    unsigned short int maxValue = 0;
    
    do
    {
        unsigned short int tmp = copyN & 1;
        tmp <<= startIndex;
        copyN >>= 1;
        copyN = copyN | tmp;

        if (copyN > maxValue)
        {
            maxValue = copyN;
        }

    } while (copyN != n);

    cout << maxValue << endl;

    return 0;
}
