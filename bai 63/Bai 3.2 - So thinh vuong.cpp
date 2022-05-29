/*So hoan thien la so co tong uoc so bang chinh so do*/
#include <bits/stdc++.h>
using namespace std;

int tongUocSo(int n);
bool checkAbundantNumber(int n);

int main()
{
    int n;
    cout << "Nhap 1 so: ";
    cin >> n;

    if (checkAbundantNumber(n))
        cout << "Day la so thinh vuong!!!!!";
    if (!checkAbundantNumber(n))
        cout << "Day khong phai la so thinh vuong!!!!!";
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

bool checkAbundantNumber(int n)
{
    if (tongUocSo(n) > n)
        return true;
    return false;
}

