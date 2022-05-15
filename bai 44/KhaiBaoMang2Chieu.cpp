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
    int A[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int z = 0; z < col; z++)
        {
            A[i][z] = rand()%100;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int z = 0; z < col; z++)
        {
            cout << A[i][z] << "\t";
        }
        cout << endl;
    }
    return 0;
}
