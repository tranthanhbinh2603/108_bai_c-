#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int r, c;
    cout << "Nhap so hang: "; cin >> r;
    cout << "Nhap so cot: "; cin >> c;

    int A[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int z = 0; z < c; z++)
        {
            A[i][z] = rand()%100;
        }
    }

    cout << "Mang sau khi lap ngau nhien: \n";
    for (int i = 0; i < r; i++)
    {
        for (int z = 0; z < c; z++)
        {
            cout << A[i][z] << "\t";
        }
        cout << endl;
    }

    int B[c][r];
    for (int i = 0; i < r; i++)
    {
        for (int z = 0; z < c; z++)
        {
            B[z][i] = A[i][z];
        }
    }

    cout << "Mang sau khi chuyen doi: \n";
    for (int i = 0; i < c; i++)
    {
        for (int z = 0; z < r; z++)
        {
            cout << B[i][z] << "\t";
        }
        cout << endl;
    }
    return 0;
}
