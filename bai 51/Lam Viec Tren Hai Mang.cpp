/*
Nhap mang a co m phan tu. Mang b co n phan tu
a. Nhap cac phan tu sao cho khong trung o ca mang a va b
b. Xep theo thu tu tang dan hai mang a va b
c. Noi 2 mang lai sao cho mang van tang
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cout << "Nhap so luong phan tu mang 1 (m): ";
    cin >> m;
    cout << "Nhap so luong phan tu mang 2 (n): ";
    cin >> n;

    int A[m], B[n];
    for (int i = 0; i < m; i++)
    {
        do
        {
            int temp;
            cout << "Nhap gia tri cho mang 1 phan tu thu " << i + 1 << ": ";
            cin >> temp;
            bool have = false;
            for (int j = 0; j < i; j++)
            {
                if (temp == A[j])
                {
                    have = true;
                }
            }
            if (have) cout << "Da trung. Vui long nhap lai: \n";
            if (have == false)
            {
                A[i] = temp;
                break;
            }
        }
        while (true);
    }

    cout << "=============================================\n";
    for (int i = 0; i < n; i++)
    {
        do
        {
            int temp;
            cout << "Nhap gia tri cho mang 2 phan tu thu " << i + 1 << ": ";
            cin >> temp;
            bool have = false;
            for (int j = 0; j < m; j++)
            {
                if (temp == A[j])
                {
                    have = true;
                }
            }
            for (int j = 0; j < i; j++)
            {
                if (temp == B[j])
                {
                    have = true;
                }
            }
            if (have) cout << "Da trung. Vui long nhap lai: \n";
            if (have == false)
            {
                B[i] = temp;
                break;
            }
        }
        while (true);
    }

    cout << "=============================================\nMang 1 truoc khi sap xep: ";
    for (int i = 0; i < m; i++)
    {
        cout << A[i] << "\t";
    }
    cout << "\nMang 2 truoc khi sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout << B[i] << "\t";
    }


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (B[j] > B[j + 1])
            {
                int temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }
    cout << "\n=============================================\n";
    cout << "Mang 1 sau khi sap xep: ";
    for (int i = 0; i < m; i++)
    {
        cout << A[i] << "\t";
    }
    cout << "\nMang 2 sau khi sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout << B[i] << "\t";
    }

    for (int i = 0; i < n; i++)
    {
        A[m + i] = B[i];
    }
    for (int i = 0; i < m + n; i++)
    {
        for (int j = 0; j < m + n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    cout << "\n=============================================\n";
    cout << "Mang duoc noi sau khi sap xep: ";
    for (int i = 0; i < m + n; i++)
    {
        cout << A[i] << "\t";
    }
}
