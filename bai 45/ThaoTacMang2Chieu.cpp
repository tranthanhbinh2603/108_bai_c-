#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int row, col;

    cout << "Nhap so dong: ";
    cin >> row;
    cout << "Nhap so cot: ";
    cin >> col;
    int M[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int z = 0; z < col; z++)
        {
            M[i][z] = rand()%100;
        }
    }

    cout << "Mang sau khi nhap ngau nhien: \n";
    for (int i = 0; i < row; i++)
    {
        for (int z = 0; z < col; z++)
        {
            cout << M[i][z] << "\t";
        }
        cout << endl;
    }

    int rowex;
    cout << "Ban muon xuat dong nao: ";
    cin >> rowex;

    cout << "Dong " << rowex << " co cac gia tri la: \n";
    for (int i = 0; i < col; i++)
    {
        cout << M[rowex - 1][i] << "\t";
    }
    cout << endl;

    int colex;
    cout << "Ban muon xuat cot nao: ";
    cin >> colex;

    cout << "Cot " << colex << " co cac gia tri la: \n";
    for (int i = 0; i < row; i++)
    {
        cout << M[i][colex - 1] << "\t";
    }
    cout << endl;

    if (row == col)
    {
        cout << "Phat hien day la ma tran vuong! \n";
        cout << "Duong cheo chinh: \n";
        for (int i = 0; i < row; i++)
        {
            for (int z = 0; z < col; z++)
            {
                if (i == z) cout << M[i][z] << "\t";
            }
        }
        cout << endl;

        cout << "Duong cheo phu: \n";
        for (int i = 0; i < row; i++)
        {
            for (int z = 0; z < col; z++)
            {
                if (i + z == row - 1) cout << M[i][z] << "\t";
            }
        }
    }
    return 0;
}
