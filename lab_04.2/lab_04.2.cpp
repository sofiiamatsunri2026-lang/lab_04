#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

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
        A = 2 * x - 13.5;

        if (x < -1)
        {
            B = sin(x) / (1 + pow(cos(x), 2));
        }
        else
        {
            if (x <= 1)
            {
                B = pow(cos(x), 2) * pow(sin(x), 2) - 1;
            }
            else
            {
                B = log10(x + 0.4);
            }
        }

        y = A - B;

        cout << "|" << setw(9) << setprecision(2) << x
            << " |" << setw(13) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}
