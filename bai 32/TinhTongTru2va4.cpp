#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int n = 0;
    int sum = 0;

    cout << "Nhap so n: ";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        if ((i == 2) || (i == 4))
        {
            continue;
        }
        sum +=i;
    }

    cout << "Sum: " << sum;

    return 0;
}
