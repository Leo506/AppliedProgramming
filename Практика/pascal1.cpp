#include <iostream>

using namespace std;

int* pascal(int n);
long factorial(int num);

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

    for (int i = 0; i < n + 1; i++)
    {
        array[i] = (int)(factorial(n) / (factorial(i) * factorial(n - i)));
    }

    return array;
}


long factorial(int num)
{
    if (num <= 0)
    {
        return 1;
    }

    return num * factorial(num - 1);
}