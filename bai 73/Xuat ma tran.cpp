/*Viet ham de nhap xuat ma tran vuong ngau nhien tu [-50,100] va ham tim phan tu max cua ma tran*/

#include <bits/stdc++.h>
using namespace std;

void NhapMaTran(int **&M, int n);
void XuatMaTran(int **M, int n);
int TimMax(int **M, int n);

int main()
{
    int n; int **M;
    cout << "Nhap n: ";
    cin >> n;
    NhapMaTran(M,n);
    XuatMaTran(M,n);
    cout << TimMax(M,n);
}

void NhapMaTran(int **&M, int n)
{
    srand(time(NULL));
    M = new int*[n];
    for (int i = 0; i < n; i++)
    {
        *(M+i) = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int z = 0; z < n; z++)
        {
            M[i][z] = -50 + rand() % 151;
        }
    }
}

void XuatMaTran(int **M, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int z = 0; z < n; z++)
        {
            cout << M[i][z] << "\t";
        }
        cout << endl;
    }
}

int TimMax(int **M, int n)
{
    int max = M[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int z = 0; z < n; z++)
        {
            if (max < M[i][z]) max = M[i][z];
        }
    }
    return max;
}
