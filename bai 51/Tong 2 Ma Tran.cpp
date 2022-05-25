/*Tong 2 ma tran: c[i,j] = a[i,j] + b[i,j]*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int m, n; //m is row, n is col
    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;

    int A[m][n], B[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand()%100;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[i][j] = rand()%100;
        }
    }

    int C[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Mang A: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "Mang B: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << B[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "Mang C: \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << C[i][j] << "\t";
        }
        cout << "\n";
    }

}
