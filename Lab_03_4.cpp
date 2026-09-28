#include <iostream>

using namespace std;

int main()
{
double x;
double y;
double R;

cout << "R = ";
cin >> R;

cout << "x = ";
cin >> x;

cout << "y = ";
cin >> y;

if ((x + R) * (x + R) + (y - R) * (y - R) <= R * R &&
    x <= 0 && y >= 0)
    cout << "yes" << endl;

else if ((x - R) * (x - R) + (y + R) * (y + R) <= R * R &&
         x >= 0 && y <= 0)
    cout << "yes" << endl;
else
    cout << "no" << endl;

    return 0;
}