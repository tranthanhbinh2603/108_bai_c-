/*Xu ly cac cong viec: Nhap, xuat, tim k, sap xep*/

#include <bits/stdc++.h>
using namespace std;

void NhapMang(int size, int B[])
{
    for (int i = 0; i < size; i++)
    {
        cout << "Nhap gia tri cho phan tu thu " << i + 1 << ": ";
        cin >> B[i];
    }
}

void XuatMang(int size, int B[])
{
    for (int i = 0; i < size; i++)
    {
        cout << B[i] << "\t";
    }
    cout <<  endl;
}

int maxInArr(int size, int A[])
{
    int max = A[0];
    for (int i = 1; i < size; i++)
    {
        if (max < A[i]) max = A[i];
    }
    return max;
}

void sortArr(int size, int A[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int z = 0; z < size - i - 1; z++)
        {
            if (A[z] > A[z+1])
            {
                int temp = A[z];
                A[z] = A[z+1];
                A[z+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Nhap vao so luong phan tu: ";
    cin >> n;

    int A[n];
    NhapMang(n,A);

    XuatMang(n,A);

    cout << maxInArr(n,A);

    sortArr(n,A);
    cout << endl;
    XuatMang(n,A);
}
