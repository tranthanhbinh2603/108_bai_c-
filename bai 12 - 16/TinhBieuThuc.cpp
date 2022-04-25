#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 0, x = 0;
    int kq = 0;

    cout << "Nhap so nguyen n: ";
    cin >> n;
    cout << "Nhap so nguyen x: ";
    cin >> x;
    //((x^2 + x + 1)^n + (x^2 - x + 1)^n)
    cout << "Ket qua: " << (pow(pow(x,2) + x + 1,n)+ pow(pow(x,2) - x + 1,n));
    return 0;
}
