#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;

    cout << "Nhap canh dau cua tam giac: ";
    cin >> a;
    cout << "Nhap canh thu hai cua tam giac: ";
    cin >> b;
    cout << "Nhap canh thu ba cua tam giac: ";
    cin >> c;

    if ((a < 0) || (b < 0) || (c < 0))
    {
        cout << "Khong tao thanh tam giac";
    }
    else
    {
        if ((a + b > c) && (a + c > b) && (b + c > a))
        {
            int cv = a + b + c;
            cout << "Chu vi la: " << cv;
            int p = cv / 2;
            cout << "Dien tich la: " << sqrt(p * (p - a) * (p - b) * (p - c));
        }
    }
    return 0;
}
