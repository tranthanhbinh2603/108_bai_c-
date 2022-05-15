#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++){
        cout << "Nhap gia tri cho phan tu thu " << i + 1 << ": ";
        cin >> A[i];
    }

    int k = 0;
    cout << "Nhap so k: ";
    cin >> k;

    int i;
    int res = 0;
    for (i = 0; i < n; i++){
        if (A[i] == k)
        {
            res++;
        }
    }
    cout << "Tong lan xuat hien so " << k << " trong mang la " << res;
    return 0;
}
