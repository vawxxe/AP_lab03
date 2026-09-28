#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y1;
    double y2;

    cout << "x = ";
    cin >> x;

    double A = (2 + x) / pow(x,2) + 1;

    if (x < 0)
    y1 = A + pow(x, 3) - 2 * pow(x, 4);
    if (x >= 0 && x <= 2)
    y1 = A + pow(abs(x) + exp(x), 3);
    if (x > 2)
    y1 = A + 4 * cos(pow(x, 2) - 2);

    cout << "1) y = " << y1 << endl;

            if (x < 0)
        y2 = A + pow(x, 3) - 2 * pow(x, 4);
            else if (x <= 2)
        y2 = A + pow(abs(x) + exp(x), 3);
            else
        y2 = A + 4 * cos(pow(x, 2) - 2);

        cout << "2) y = " << y2 << endl;
        return 0;
}
