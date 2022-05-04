#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int sumtemp = 0;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    for (int i = 1; i <= n - 1; i++)
    {
        if (n % i == 0)
            sumtemp += i;
    }

    if (sumtemp == n)
        cout << n << " la so hoan thien";
    else
        cout << n << " khong la so hoan thien";
    return 0;
}
