/*Dung ham de quy xu ly 2 yeu cau:
- Tim so Fibo tai vi tri thu N bat ky
- Xuat day Fibo tu 1 toi N*/

#include <bits/stdc++.h>
using namespace std;

int Fibonaci(int n)
{
    if ((n == 1) || (n == 2))
        return 1;
    return Fibonaci(n - 1) + Fibonaci (n - 2);
}

int main()
{
    int n;
    cout << "Nhap so N: ";
    cin >> n;

    cout << "So Fibonaci thu " << n << " la: " << Fibonaci(n) << endl;

    cout << "Day so Fibonaci tu so 1 den " << n << " la:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << Fibonaci(i) << "\t";
    }
}
