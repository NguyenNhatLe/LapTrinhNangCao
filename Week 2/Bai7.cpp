#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
long double Factorial(int n)
{
    long double fac =1;
    for (int i = 1; i <= n; i++) fac *= i;
    return fac;
}
int main()
{
    double x;
    cin >> x;
    int i = 1;
    while ((double)pow(x, i) / Factorial(i) > 0.001) i++;
    long double sum = 1;
    for (int j =1; j <= i; j++)

    {
        sum += pow(x, j) / Factorial(j);
    }
    cout << setprecision(4) << fixed << sum << endl;
    return 0;
}
