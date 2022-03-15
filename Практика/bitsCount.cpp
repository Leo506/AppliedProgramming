#include <iostream>

using namespace std;

int main()
{
    unsigned int x;
    cin >> x;

    int size = sizeof(unsigned int) * 8;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        unsigned int tmp = x >> i;
        if (!tmp)
        {
            break;
        }

        if (tmp & 1)
        {
            count++;
        
        }
    }

    cout << count << endl;

    return 0;
}
