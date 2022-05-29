//Viet chuong trinh tinh phuong trinh bac 2 dung ham
#include <bits/stdc++.h>
using namespace std;

void slovePTBac2(int a, int b, int c)
{
    int denta = sqrt(pow(b, 2) - 4 * a * c);
    if (denta > 0)
    {
        cout << "Phuong trinh co 2 nghiem la: " << endl;
        cout << (-b + sqrt(denta)) / 2 * a << endl;
        cout << (-b - sqrt(denta)) / 2 * a;
    }
    if (denta == 0)
        cout << "Phuong trinh co 1 nghiem kep la: " << -b / 2 * a;
    if (denta < 0)
        cout << "Phuong trinh vo nghiem";
}

int main()
{
    int a,b,c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;

    slovePTBac2(a, b, c);
}
