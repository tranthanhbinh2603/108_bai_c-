#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a = 0, b = 0, c = 0;
    double denta = 0;

    cout << "Xin moi nhap a: ";
    cin >> a;
    cout << "Xin moi nhap b: ";
    cin >> b;
    cout << "Xin moi nhap c: ";
    cin >> c;

    denta = pow(b, 2) - 4*a*c;
    if (denta > 0)
    {
        cout << "Phuong trinh co 2 nghiem la: " << endl;
        cout << "\tx1=" << ((-b + sqrt(denta))/2*a) << endl;
        cout << "\tx2=" << ((-b - sqrt(denta))/2*a) << endl;
    }
    else
    {
        if (denta = 0)
        {
            cout << "Phuong trinh co 1 nghiem kep la: x1 = x2 = " << (-b / 2*a);
        }
        else
        {
            cout << "Phuong trinh vo nghiem";
        }
    }
    return 0;
}
