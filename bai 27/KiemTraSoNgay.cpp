#include <iostream>
using namespace std;

int main()
{
    int thang, nam;

    cout << "Nhap thang: ";
    cin >> thang;
    if (thang == 2)
    {
        cout << "Nhap nam: ";
        cin >> nam;

        if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
        {
            cout << "Thang nay co 29 ngay";
        }
        else
        {
            cout << "Thang nay co 28 ngay";
        }
    }
    else
    {
        if ((thang == 1) || (thang == 3) || (thang == 5) || (thang == 7) || (thang == 8) || (thang == 10) || (thang == 12))
        {
            cout << "Thang nay co 31 ngay";
        }
        else
        {
            cout << "Thang nay co 30 ngay";
        }
    }
    return 0;
}
