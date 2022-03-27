#include <iostream>

using namespace std;

int* pascal(int n);

int main()
{
    int n;
    cin >> n;

    int* result = pascal(n);

    for(int i = 0; i < n + 1; i++)
    {
        cout << result[i];

        if (i != n)
        {
            cout << ", ";
        }
    }

    cout << endl;

    delete[] result;

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