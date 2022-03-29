#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int** matrix = new int*[n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
        for (int j = 0, value = (i  + 1); j < m; j++, value++)
        {
            int toFill = value % m == 0 ? m : value % m;
            matrix[i][j] = toFill;
            cout.width(3);
            cout << matrix[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete matrix[i];
    }

    delete matrix;

    return 0;
}
