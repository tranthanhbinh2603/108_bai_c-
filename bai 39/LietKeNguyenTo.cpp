#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Nhap so nguyen n: ";
    cin >> n;

    cout << "Cac so nguyen to la: ";
    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true)
        {
            cout << i << " ";
        }
    }
    return 0;
}
