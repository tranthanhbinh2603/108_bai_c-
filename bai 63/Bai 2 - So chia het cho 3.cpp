#include <bits/stdc++.h>
using namespace std;

int tongCacChuSo(int n);
bool checkChia3(int n);

int main()
{
    int n;
    cout << "Nhap 1 so: ";
    cin >> n;
    if (checkChia3(n))
        cout << "So nay chia het cho 3!!!!!";
    if (!checkChia3(n))
        cout << "So nay khong chia het cho 3!!!!!!!!";
}

int tongCacChuSo(int n)
{
    int tong;
    do
    {
        tong += n % 10;
        n = (n - (n % 10)) / 10;
    }
    while (n > 0);
    return tong;
}

bool checkChia3(int n)
{
    int tong = tongCacChuSo(n);
    if (tong % 3 == 0)
        return true;
    return false;
}
