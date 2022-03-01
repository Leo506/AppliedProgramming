#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;

    const double EPSILON = 0.000001;

    double result1 = 1 / (float)num1;
    double result2 = 1 / (float)num2;

    cout << result1 << " " << result2;
    if (abs(result1 - result2) <= EPSILON)
        cout << " Results are equal (by 0.000001 epsilon)" << endl;
    else
        cout << " Results are not equal (by 0.000001 epsilon)" << endl;

    return 0;
}
