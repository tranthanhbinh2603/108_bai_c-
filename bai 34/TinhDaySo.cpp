#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x = 0, n = 0;
    double mau = 1;
    double S = 0;

    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;

    for (double i = 1; i <= n; i++)
    {
        double tu = pow(x, i);
        mau *= i;
        S += tu / mau;
    }

    cout << "S(" << x << "," << n << ") = " << S;
    return 0;
}
