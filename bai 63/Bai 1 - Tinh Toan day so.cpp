/*Tinh 2 day so:
- S(n) = 1 + 1/1+2 + 1/1+2+3 + ....
- S(x,n) = x + x^2/1+2 + x^3/1+...*/

#include <bits/stdc++.h>
using namespace std;

double tongN(double n);
double muX(double x, double somu);
double pt1(double n);
double pt2(double x, double n);

int main()
{
    double x,n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;

    cout << "S(" << n << ") = " << pt1(n) << endl;
    cout << "S(" << x << "," << n <<") = " << pt2(x,n);

}

double tongN(double n)
{
    return (n * (n + 1))/2;
}

double muX(double x, double somu)
{
    return pow(x, somu);
}

double pt1(double n)
{
    double kq;
    for (int i = 1; i <= n; i++)
    {
        kq += 1/tongN(i);
    }
    return kq;
}

double pt2(double x, double n)
{
    double kq;
    for (int i = 1; i <= n; i++)
    {
        kq += muX(x,i)/tongN(i);
    }
    return kq;
}
