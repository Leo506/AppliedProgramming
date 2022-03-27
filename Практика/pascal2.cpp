#include <iostream>

using namespace std;

int* pascal(int n);

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int* result = pascal(i);
        for (int j = 0; j < i + 1; j++)
        {
            cout << result[j];

            if (j != i)
            {
                cout << " ";
            }
        }

        cout << endl;
        delete[] result;
    }

    return 0;
}


int* pascal(int n)
{
    int* array = new int[n+1];

    int currentElement = 1;
    array[0] = currentElement;
    for (int i = 1; i <= n; i++)
    {
        currentElement *= (n - i + 1);
        currentElement /= i;
        array[i] = currentElement;
    }

    return array;
}