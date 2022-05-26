/*Tim phan tu nho thu 2 trong mang. Neu khong co (nho nhat = nho thu 2) in ra "Khong ton tai so can tim"*/
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
    cout << "Mang da sinh ra la: \n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }
    cout << "\n";

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    cout << "\n";
    if (A[0] == A[1])
    {
        cout << "Khong ton tai so can tim";
    }
    else cout << "So nho thu 2 la: " << A[1];
}


