#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    double R, xp, xk, dx;
    double x, y;

    cout << "R = ";
    cin >> R;
    cout << "xp = ";
    cin >> xp;
    cout << "xk = ";
    cin >> xk;
    cout << "dx = ";
    cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(9) << "x" << " |"
        << setw(13) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        if (x < -1)
        {
            y = -x - 1;
        }
        else if (x < 1)
        {
            y = 0;
        }
        else if (x <= 1 + 2 * R)
        {
            y = sqrt(max(0.0, R * R - pow(x - (1 + R), 2)));
        }
        else
        {
            y = -(x - (1 + 2 * R)) / (6 - 2 * R);
        }

        cout << "|" << setw(9) << setprecision(2) << x
            << " |" << setw(13) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}
