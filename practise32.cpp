#include <iostream>

using namespace std;


void fillMatrix(int** matrix, int row, int col, int maxRow, int* value);


int main()
{
    int n, m;
    cin >> n >> m;

    int** matrix = new int*[n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
    }

    int counter = 1;

    // Заполнение до самой крупной диагонали
    for (int column = 0; column < m; column++)
    {
        int dRow = 0;
        int dCol = column;

        fillMatrix(matrix, dRow, dCol, n, &counter);
    }

    // Заполнение после самой крупной диагонали
    for (int row = 1; row < n; row++)
    {
        int dRow = row;
        int dCol = m - 1;

        fillMatrix(matrix, dRow, dCol, n, &counter);
    }


    // Вывод матрицы
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout.width(3);
            cout << matrix[i][j];
        }

        cout << endl;
    }

    // Освобождение памяти
    for (int i = 0; i < n; i++)
    {
        delete matrix[i];
    }

    delete matrix;

    return 0;
}


void fillMatrix(int** matrix, int row, int col, int maxRow, int* value)
{
    while (col >= 0 && row < maxRow)
    {
        matrix[row][col] = *value;
        (*value)++;
        row++;
        col--;
    }
}
