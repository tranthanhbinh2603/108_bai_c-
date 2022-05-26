#include <bits/stdc++.h>
using namespace std;

//int cong2so(int a, int b);
int cong2so(int a, int b)
{
    return a+b;
}

//void xuatDuLieu(int x);
void xuatDuLieu(int x)
{
    cout << x << endl;
    //return;
}

//void output()
void output()
{
    int kq = cong2so(9,10);
    xuatDuLieu(kq);
}

int main()
{
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    int res = cong2so(a,b);
    cout << "Tong a va b la: " << res << endl;
    int res2 = cong2so(113,114);
    cout << "Tong 113 va 114 la " << res2 << endl;
    int res3 = cong2so(4,5);
    xuatDuLieu(res3);
    cout << "Ham goi ham: \n";
    output();
}
