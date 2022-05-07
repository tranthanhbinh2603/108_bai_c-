#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Nhap so nguyen n: ";
    cin >> n;

    bool isPrime = true;

    if (n == 1) isPrime = false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "Day la so nguyen to";
    }
    else
    {
        cout << "Day khong phai la so nguyen to";
    }

    return 0;
}
