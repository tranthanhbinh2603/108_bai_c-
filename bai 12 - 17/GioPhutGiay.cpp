#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    int h = 0, m = 0, s = 0;

    cout << "Moi ban nhap vao so giay: ";
    cin >> t;

    h = (t / 3600) % 24;
    m = (t % 3600) / 60;
    s = (t % 3600) % 60;

    int hourtemp = h > 12 ? h - 12 : h;
    cout << "Thoi gian la " << hourtemp << ":" << m << ":" << s << " " <<(h > 12 ? "PM" : "AM");
    return 0;
}
