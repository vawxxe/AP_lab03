#include <iostream>
#include <cmath>

using namespace std;
int main()
{
double x;
double R;
double y;

cout << "R = ";
cin >> R;

cout << "x = ";
cin >> x;

if (x < -6)
    y = R;

if (x >= -6 && x < -R)
    y = (x + R) / (6 - R);

if (x >= -R && x <= R)
    y = sqrt(pow(R, 2) - pow(x, 2));

if (x > R)
    y = R - x;

    cout << "y = " << y << endl;
    return 0;
}