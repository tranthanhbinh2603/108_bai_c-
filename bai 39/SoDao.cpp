#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Nhap so nguyen n: ";
    cin >> n;

    cout << "Ket qua: ";
    while (n > 0)
    {
        cout << n % 10;
        n /=10;
    }
    return 0;
}
