#include <iostream>
using namespace std;

int main()
{
    int diem = 0;

    cout << "Nhap 1 so diem: ";
    cin >> diem;

    if ((diem > 10) || (diem < 0))
    {
        cout << "Loi Kia!!!!!!";
    }
    else
    {
        if (diem >= 5)
        {
            cout << "DAU!!!!!";
        }
        else
        {
            cout << "ROT!!!!!";
        }
    }
    return 0;
}
