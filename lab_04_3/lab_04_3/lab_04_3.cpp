#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double Xp, Xk, dX;
    double x, F;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "Xp = ";
    cin >> Xp;
    cout << "Xk = ";
    cin >> Xk;
    cout << "dX = ";
    cin >> dX;

    cout << fixed;

    cout << "---------------------------" << endl;
    cout << "|" << setw(9) << "x" << " |"
        << setw(13) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    for (x = Xp; x <= Xk; x += dX)
    {
        if (x < 5 && b != 0)
        {
            F = a * pow(x + 7, 2) - b;
        }
        else if (x > 5 && b == 0)
        {
            F = (x - c * a) / (a * x);
        }
        else
        {
            F = x / c;
        }

        cout << "|" << setw(9) << setprecision(2) << x
            << " |" << setw(13) << setprecision(3) << F
            << " |" << endl;
    }

    cout << "---------------------------" << endl;

    return 0;
}
