/*
Yeu cau: Nhap 1 mang so tu nhien. Xuat ra man hinh:
Dong 1 (D1): Xuat toan bo mang
D2: Gom cac so le, tong cong co bao nhieu so le
D3: Gom cac so chan, tong cong co bao nhieu so chan
D4: Gom cac so nguyen to
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    cout << "Nhap so luong phan tu: ";
    cin >> n;

    long long A[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap gia tri cho phan tu thu " << i + 1 << ": ";
        cin >> A[i];
    }

    cout << "Ket qua:\nDong 1: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }
    cout << endl;

    int countOdd = 0;
    cout << "Dong 2: ";
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 1)
        {
            cout << A[i] << "\t";
            countOdd++;
        }
    }
    cout << "(So luong so le la: " << countOdd << ")" <<endl;

    int countEven = 0;
    cout << "Dong 3: ";
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            cout << A[i] << "\t";
            countEven++;
        }
    }
    cout << "(So luong so chan la: " << countEven << ")" << endl;

    cout << "Dong 4: ";
    for (int i = 0; i < n; i++)
    {
        int z;
        for (z = 2; z < A[i]; z++)
        {
            if ((A[i] % z == 0) || (A[i] == 1)) break;
        }
        if ((A[i] != 1) && (z == A[i])) cout << A[i] << "\t";
    }
}
