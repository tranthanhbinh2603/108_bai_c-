#include <iostream>
using namespace std;

int main()
{
    int i = 0, n = 0;
    int sum = 0;

    cout << "Nhap n: ";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        sum += i;
    }

    cout << "Tong = " << sum;
    return 0;
}
