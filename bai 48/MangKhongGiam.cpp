#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Nhap so luong phan tu: ";
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        while(true)
        {
            cout << "Nhap gia tri cho phan tu thu " << i + 1 << ": ";
            cin >> A[i];
            if ((A[i] >= A[i - 1]) || (i == 0))
            {
                break;
            }
            else cout << "Ban co ve nhap sai roi, thu nhap lai nhe! \n";
        }
    }

    cout << "Ket qua: \n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }

    return 0;
}
