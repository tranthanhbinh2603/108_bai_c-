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

    cout << "Mang da sinh: \n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }

    cout << "\nCac so nguyen to: \n";
    for (int i = 0; i < n; i++)
    {
        bool isPrime = true;
        for (int z = 2; z < A[i]; z++)
        {
            if (A[i] % z == 0) isPrime = false;
        }
        if (((A[i] == 2) || (isPrime)) && (A[i] != 0)) cout << A[i] << "\t";
    }

    cout << "\nSap xep so chan: \n";
    int B[n]; int index = 0;
    for (int i = 0; i < n; i++)
    {
        if ((A[i] != 0) && (A[i] % 2 == 0))
        {
            B[index] = A[i];
            index++;
        }
    }
    for (int i = 0; i < index - 1; i++)
    {
        for (int j = 0; j < index - i - 1; j++)
        {
            if (B[j] > B[j+1])
            {
                int temp = B[j];
                B[j] = B[j+1];
                B[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < index; i++)
    {
        cout << B[i] << "\t";
    }

}
