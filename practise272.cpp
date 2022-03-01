#include <iostream>
#include <vector>
using namespace std;

struct Letter
{
    string s1;
    string s2;
};

int main()
{
   // int N, M, P;
   // cin >> N >> M;
   // cin >> P;

    int P = 5;
    for (int N = 3; N <= 10; N++)
    {
        for (int M = 3; M <= 10; M++)
        {
            cout << "Args: " << N << " " << M << endl;
    vector<Letter> pVector;
    for (int i = 2; i <= N; i += 2)
    {
        Letter letter;
        letter.s1 = "P " + to_string(i - 1);
        letter.s2 = "P " + to_string(i);

        pVector.push_back(letter);
    }

    if (N % 2 != 0)
    {
        if (M % 2 != 0)
        {
            Letter letter;
            letter.s1 = "P " + to_string(N);
            letter.s2 = "C " + to_string(M-1);
            pVector.push_back(letter);

            for (int i = M - 3; i >= 0; i-=2)
            {
                Letter letter;
                letter.s1 = "C " + to_string(i + 1);
                letter.s2 = "C " + to_string(i);
                pVector.push_back(letter);
            }
        }
        else
        {
            Letter letter;
            letter.s1 = "P " + to_string(N);
            letter.s2 = "- -";
            pVector.push_back(letter);

            for (int i = M-2; i >= 0; i-=2)
            {
                Letter letter;
                letter.s1 = "C " + to_string(i+1);
                letter.s2 = "C " + to_string(i);
                pVector.push_back(letter);
            }
        }
    }

    else
    {
        if (M % 2 != 0)
        {
            Letter letter;
            letter.s1 = "- -";
            letter.s2 = "C " + to_string(M - 1);
            pVector.push_back(letter);

            for (int i = M-3; i >= 0; i-=2)
            {
                Letter letter;
                letter.s1 = "C " + to_string(i+1);
                letter.s2 = "C " + to_string(i);
                pVector.push_back(letter);
            }
        }
        else
        {
            for (int i = M-2; i >= 0; i-=2)
            {
                Letter letter;
                letter.s1 = "C " + to_string(i+1);
                letter.s2 = "C " + to_string(i);
                pVector.push_back(letter);
            }
        }
    }

    if ((P-1) < pVector.size())
    {
        cout << pVector[P-1].s1 << endl << pVector[P-1].s2 << endl;
    }
    else
    {
        cout << "- -" << endl << "- -" << endl;
    }
        }
    }
}
