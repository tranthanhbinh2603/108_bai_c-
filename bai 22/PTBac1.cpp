#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;

    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Phuong trinh co vo so nghiem";
        }
        else
        {
            cout << "Phuong trinh vo nghiem";
        }
    }
    else
    {
        cout << "x = " << -b * 1.0 / a;
    }
    return 0;
}
