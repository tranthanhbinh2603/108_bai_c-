/*Dao 1 mang: vd 1 2 3 => 3 2 1*/

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

    cout << "Mang ban dau: \t";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }
    cout << "\n";

    cout << "Mang sau khi dao: \t";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << A[i] << "\t";
    }
    cout << "\n";
}
