#include <iostream>
using namespace std;

int main()
{
    cout << "CHUONG TRINH TINH CHU VI - DIEN TICH TAM GIAC" << endl;
    double a = 0, h = 0;
    double s = 0;

    cout << "Moi thim nhap chieu dai canh day: ";
//    cin >> a;
    cin >> a;
    cout << "Moi thim nhap chieu dai chieu cao: ";
    cin >> h;

    s = 1.0/2 * a * h;
    cout << "Dien tich tam giac la: " << s;
    return 0;
}
