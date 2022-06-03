#include <bits/stdc++.h>
using namespace std;

void Cong2MaTran(int **A, int **B, int **&C, int n);
void SinhMaTran(int **&A, int **&B, int n);
void XuatMaTran(int **A, int n);

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int **A, **B, **C;
    SinhMaTran(A,B,n);
    XuatMaTran(A,n);
    XuatMaTran(B,n);
    Cong2MaTran(A,B,C,n);
    XuatMaTran(C,n);
}

void SinhMaTran(int **&A, int **&B, int n)
{
    srand(time(NULL));
    A = new int *[n];
    B = new int *[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = new int[n];
        B[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand()%100;
            B[i][j] = rand()%100;
        }
    }
}

void XuatMaTran(int **A, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void Cong2MaTran(int **A, int **B, int **&C, int n)
{
    C = new int *[n];
    for (int i = 0; i < n; i++)
    {
        C[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
