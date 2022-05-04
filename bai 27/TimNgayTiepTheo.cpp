#include <iostream>
using namespace std;

int main()
{
    int ngay, thang, nam;

    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;

    if ((thang == 1) || (thang == 3) || (thang == 5) || (thang == 7) || (thang == 8) || (thang == 10))
    {
        if (ngay == 31)
        {
            ngay = 1;
            thang++;
        }
        else
        {
            ngay++;
        }
    }
    else
    {
        if (thang == 2) //Co loi, se sua sau
        {
            if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
            {
                if (ngay == 29)
                {
                    ngay == 1;
                    thang++;
                }
                else
                {
                    ngay++;
                }
            }
            else
            {
                if (ngay == 28)
                {
                    ngay == 1;
                    thang++;
                }
                else
                {
                    ngay++;
                }
            }
        }
        else
        {
            if (thang == 12)
            {
                if (ngay == 31)
                {
                    ngay = 1;
                    thang = 1;
                    nam = 1;
                }
            }
            else
            {
                if (ngay == 30)
                {
                    ngay == 1;
                    thang++;
                }
                else
                {
                    ngay++;
                }
            }
        }
    }


    cout << "Ngay tiep theo la: " << ngay << "/" << thang << "/" << nam;
    return 0;
}
