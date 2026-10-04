// Мацун Софія
// Лабораторна робота № 4
// Завдання 4.1
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k, N, i;
    double S;

    cout << "k = ";
    cin >> k;

    cout << "N = ";
    cin >> N;

    // 1. Цикл while
    S = 0;
    i = k;

    while (i <= N)
    {
        S += sin(i) * cos(i) / (1 + pow(sin(i), 2));
        i++;
    }

    cout << "while: " << S << endl;


    // 2. Цикл do...while
    S = 0;
    i = k;

    do
    {
        S += sin(i) * cos(i) / (1 + pow(sin(i), 2));
        i++;
    } while (i <= N);

    cout << "do...while: " << S << endl;


    // 3. Цикл for зі збільшенням
    S = 0;

    for (i = k; i <= N; i++)
    {
        S += sin(i) * cos(i) / (1 + pow(sin(i), 2));
    }

    cout << "for i++: " << S << endl;


    // 4. Цикл for зі зменшенням
    S = 0;

    for (i = N; i >= k; i--)
    {
        S += sin(i) * cos(i) / (1 + pow(sin(i), 2));
    }

    cout << "for i--: " << S << endl;

    return 0;
}

