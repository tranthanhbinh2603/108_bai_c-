/*So hoan thien la so co tong uoc so bang chinh so do*/
#include <bits/stdc++.h>
using namespace std;

int tongUocSo(int n);
bool checkPefectNumber(int n);

int main()
{
    int n;
    cout << "Nhap 1 so: ";
    cin >> n;

    if (checkPefectNumber(n))
        cout << "Day la so hoan hao!!!!!";
    if (!checkPefectNumber(n))
        cout << "Day khong phai la so hoan hao!!!!!";
}

int tongUocSo(int n)
{
    int tong;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            tong += i;
    }
    return tong;
}

bool checkPefectNumber(int n)
{
    if (tongUocSo(n) == n)
        return true;
    return false;
}
