#include <iostream>
using namespace std;

int main()
{
    double x, n;
    double mau = 1, tu;
    double sum;

    cout << "Nhap x = ";
    cin >> x;
    cout << "Nhap n = ";
    cin >> n;

    tu = x; sum = x;
    for (int i = 3; i <= n; i+=2)
    {
        tu *= x * x;
        mau *= i * (i - 1);
        sum += tu/mau;
    }
    cout << "Ket qua: " << sum;
    return 0;
}
