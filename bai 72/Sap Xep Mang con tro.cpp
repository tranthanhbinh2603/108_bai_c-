/*Nhap vao mang a N phan tu ngau nhien tu 1 den n. Sap xep theo chieu giam dan*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a[n]; int *p;
    p = a;
    for (int i = 0; i < n; i++)
    {
        int temp = rand()%100 + 1;
        *(p+i) = temp;
    }
    cout << "Mang ban dau:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int z = 0; z < n - i - 1; z++)
        {
            if (a[z] < a[z+1])
            {
                int temp = a[z];
                a[z] = a[z+1];
                a[z+1] = temp;
            }
        }
    }
     cout << "Mang ban dau:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}
