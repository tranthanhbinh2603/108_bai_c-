#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    double maxi;

    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    cout << "Nhap so thu ba: ";
    cin >> c;

    maxi = a;
    if (a < b)
    {
        if (b < c)
        {
            maxi = c;
        }
        else
        {
            maxi = b;
        }
    }
    else
    {
        if (a < c)
        {
            maxi = c;
        }
    }

    cout << "Ket qua: " << maxi;
    return 0;
}
