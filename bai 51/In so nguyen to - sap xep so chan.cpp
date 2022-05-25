/*Ten da noi ra muc dich cua chuong trinh*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = rand()%100;
    }

    cout << "Mang da sinh: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }

    cout << "\nCac so nguyen to: ";
    for (int i = 0; i < n; i++)
    {
        bool isPrime = true;
        for (int z = 2; z < A[i]; z++)
        {
            if (A[i] % z == 0) isPrime = false;
        }
        if (((A[i] == 2) || (isPrime)) && (A[i] != 0)) cout << A[i] << "\t";
    }
}
