#include <iostream>
using namespace std;

int main()
{
    int sottdien = 0;

    cout << "Nhap so kwh tieu thu dien: ";
    cin >> sottdien;

    if (sottdien <= 100)
    {
        cout << "Tien dien phai tra la: " << sottdien * 600;
    }
    if ((sottdien > 100) && (sottdien <= 150))
    {
        cout << "Tien dien phai tra la: " << 100 * 600 + (sottdien - 100) * 700;
    }
    if ((sottdien > 150) && (sottdien <= 200))
    {
        cout << "Tien dien phai tra la: " << 100 * 600 + 50 * 700 + (sottdien - 150) * 900;
    }
    if (sottdien > 200)
    {
        cout << "Tien dien phai tra la: " << 100 * 600 + 50 * 700 + 50 * 900 + (sottdien - 2001) * 1100;
    }
    return 0;
}
