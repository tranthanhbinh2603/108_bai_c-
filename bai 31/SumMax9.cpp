#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int i = 0;
    int sum = 0;

    cout << "Nhap n: ";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        if (sum >= 9)
        {
            break;
        }
        sum += i;
    }
    cout << "Sum: " << sum;
    return 0;
}
