#include <iostream>

using namespace std;

int main()
{
    bool ispalindrome = true;
    int n;
    cin >> n;

    if (n <= 1)
    {
        cout << "Wrong size\n";
        return 0;
    }

    int* vector = new int[n];

    int middleIndex = n % 2 == 0 ? n / 2 : n / 2 + 1;

    for (int i = 0; i < n; i++)
    {
        cin >> vector[i];

        if (i >= middleIndex && ispalindrome)
        {
            int mirrorIndex = n - 1 - i;
            if (vector[i] != vector[mirrorIndex])
            {
                ispalindrome = false;
            }
        }
    }

    if (ispalindrome)
    {
        cout << "It is a palindrome";
    }

    else
    {
        cout << "It is not a palindrome";
    }

    cout << endl;

    return 0;
}
