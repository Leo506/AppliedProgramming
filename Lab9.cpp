#include <iostream>
#include <cmath>

using namespace std;

double circleArea(double x1, double y1, double x2, double y2);
double triangleArea(double x1, double y1, double x2, double y2, double x3, double y3);

int main()
{
    double qX, qY;
    double zX, zY;
    double aX, aY;
    double bX, bY;
    double cX, cY;

    cout << "Enter Q x and y coordinates: ";
    cin >> qX >> qY;

    cout << "Enter Z x and y coordinates: ";
    cin >> zX >> zY;

    cout << "Enter A x and y coordinates: ";
    cin >> aX >> aY;

    cout << "Enter B x and y coordinates: ";
    cin >> bX >> bY;

    cout << "Enter C x and y coordinates: ";
    cin >> cX >> cY;

    cout << "Probability: " << triangleArea(aX, aY, bX, bY, cX, cY) / circleArea(qX, qY, zX, zY) << endl;
    return 0;
}


double circleArea(double x1, double y1, double x2, double y2)
{
    double radius = sqrt(pow(x2 - x1, 2) + pow(y2 - x2, 2));
    return M_PI * pow(radius, 2);
}


double triangleArea(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
}
