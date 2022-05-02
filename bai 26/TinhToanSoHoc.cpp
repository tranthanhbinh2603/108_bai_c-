#include <iostream>
using namespace std;

int main()
{
    double a,b; char ch;
    double kq;

    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    cout << "Nhap ki tu ch: ";
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    }

    return 0;
}
