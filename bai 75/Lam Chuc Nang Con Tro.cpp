#include <bits/stdc++.h>
using namespace std;

void CapPhatBoNho(int *&A, int n);
void NhapDuLieu(int *&A, int n);
void XuatMang(int *A, int n);
void Xuat3SoLonNhat(int *A, int *&res, int n);

int main()
{
    int *A; int n;
    cout << "Nhap so luong con tro: ";
    cin >> n;

    int *res = new int[3];
    CapPhatBoNho(A,n);
    NhapDuLieu(A,n);
    cout << "Mang ban dau:\n";
    XuatMang(A,n);
    Xuat3SoLonNhat(A,res,n);
    cout << "Ba so lon nhat:\n";
    XuatMang(res,3);
}

void CapPhatBoNho(int *&A, int n)
{
    A = new int[n];
}

void NhapDuLieu(int *&A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap gia tri cho con tro thu " << i + 1 << ": ";
        cin >> A[i];
    }
}

void XuatMang(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout <<  A[i] << "\t";
    }
    cout << endl;
}

void Xuat3SoLonNhat(int *A, int *&res, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int z = 0; z < n - i - 1; z++)
        {
            if (A[z] < A[z+1])
            {
                int temp = A[z];
                A[z] = A[z+1];
                A[z+1] = temp;
            }
        }
    }
    res[0] = A[0]; res[1] = A[1]; res[2] = A[2];

}
