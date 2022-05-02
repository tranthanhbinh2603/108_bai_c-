#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;

    cout << "Xin moi nhap a: ";
    cin >> a;
    cout << "Xin moi nhap b: ";
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
        cout << "Phuong trinh co 1 nghiem la " << -b*1.0/a;
    }
    return 0;
}
