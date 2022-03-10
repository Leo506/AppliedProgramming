#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int findAndReplaceZero(int* array, int size);
void findAndReplacePos(int* array, int size, int startIndex);
void shifting(int* array, int startIndex, int endIndex);
void showMassive(const int* array, int size);


int main()
{
    const int SIZE = 10;
    int array[SIZE];

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = rand() % 31 - 15;
    }

    cout << "Original\n";
    showMassive(array, SIZE);

    int zeroIndex = findAndReplaceZero(array, SIZE);
    
    findAndReplacePos(array, SIZE, zeroIndex+1);

    cout << "Modified\n";
    showMassive(array, SIZE);

    return 0;
}


int findAndReplaceZero(int* array, int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        bool hasChange = false;
        for (int j = i+1; j < size; j++)
        {
            if (array[j] == 0)
            {
                int tmp = array[j];
                shifting(array, i, j);
                array[i] = tmp;
                hasChange = true;
                break;
            }
        }

        if (!hasChange)
            return array[i] == 0 ? i : i - 1;
    }

    return i - 1;
}


void findAndReplacePos(int* array, int size, int startIndex)
{
    for (int i = startIndex; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[j] > 0)
            {
                int tmp = array[j];
                shifting(array, i, j);
                array[i] = tmp;
                break;
            }
        }
    }
}


void shifting(int* array, int startIndex, int endIndex)
{
    for (int i = endIndex; i > startIndex; i--)
    {
        array[i] = array[i-1];
    }
}


void showMassive(const int* array, int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
