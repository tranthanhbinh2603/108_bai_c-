/*Tinh chu vi dien tich tam giac khi biet 3 canh*/
#include <bits/stdc++.h>
using namespace std;

bool CheckTriangle(int a, int b, int c)
{
    if (a + b < c)
        return false;
    if (a + c < b)
        return false;
    if (b + c < a)
        return false;
    return true;
}

double Ptriangle(int a, int b, int c)
{
    if (CheckTriangle(a, b, c))
        return a + b + c;
    cout << " (Co ve nhu day khong phai 1 tam giac) ";
    return 0;
}

double Striangle(int a, int b, int c)
{
    if (CheckTriangle(a, b, c))
    {
        int aHalfP = (a + b + c) / 2;
        return sqrt(aHalfP * (aHalfP - a) * (aHalfP - b) * (aHalfP - c));
    }
    return 0;
}

int main()
{
    int a, b, c;
    cout << "Nhap canh thu nhat: ";
    cin >> a;
    cout << "Nhap canh thu hai: ";
    cin >> b;
    cout << "Nhap canh thu ba: ";
    cin >> c;

    cout << "----------------------------------\n";
    cout << "Chu vi: " << Ptriangle(a,b,c) << endl;
    cout << "Dien tich: " << Striangle(a,b,c);
}
