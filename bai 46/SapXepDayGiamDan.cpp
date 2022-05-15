#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so luong n: ";
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int z = 0; z < n - i + 1; z++)
        {
            if (A[z] < A[z + 1])
            {
                int temp = A[z];
                A[z] =  A[z + 1];
                A[z + 1] = temp;
            }
        }
    }

    cout << "Ket qua \n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }
    return 0;
}

