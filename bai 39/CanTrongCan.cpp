#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double n;
    double S;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        S = sqrt(S + i);
    }

    cout << "S(" << n << ") = " << S;
    return 0;
}
