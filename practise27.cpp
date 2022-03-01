#include <iostream>
using namespace std;

int main()
{
    int N, M, P;
    cin >> N >> M;
    cin >> P;

    bool hasSpace = false;

    int countOfLetters;
    if ((N + M) % 2 == 0)
    {
        countOfLetters = (N + M) / 2;
    }
    else
    {
        countOfLetters = (N + M + 1) / 2;
        hasSpace = true;
    }

    if (P > countOfLetters)
    {
        cout << "- -" << endl << "- -" << endl;
        return 0;
    }

    int temp = P * 2;

    if (temp <= N)
    {
        cout << "P " << temp - 1 << endl;
        cout << "P " << temp << endl;
    }
    else
    {
        P = (-P) + (countOfLetters + 1);
        temp = P * 2;

        if (temp <= M)
        {
            cout << "C " << temp - 1 << endl;
            cout << "C " << temp - 2 << endl;
        }
        else
        {
            if (hasSpace)
            {
                cout << (N % 2 == 0 ? "- -" : "P " + to_string(N)) << endl;
                cout << (N % 2 == 0 ? "C " + to_string(M - 1) : "- -") << endl;
            }
            else
            {
                cout << "P " + to_string(N) << endl;
                cout << "C " + to_string(M-1) << endl;
            }
        }
    }


    return 0;
}
