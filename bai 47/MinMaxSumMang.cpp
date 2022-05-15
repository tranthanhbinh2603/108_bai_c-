#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    double A[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> A[i];
    }

    int resmax = A[0];
    int resmin = A[0];
    int ressum = A[0];

    for (int i = 1; i < n; i++)
    {
        if (resmax < A[i]) resmax = A[i];
        if (resmin > A[i]) resmin = A[i];
        ressum += A[i];
    }

    cout << "Ket qua: \n";
    cout << "\t - Gia tri lon nhat: " << resmax << endl;
    cout << "\t - Gia tri nho nhat: " << resmin << endl;
    cout << "\t - Gia tri tong: " << ressum << endl;

    return 0;
}
