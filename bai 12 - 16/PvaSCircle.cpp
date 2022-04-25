#include <iostream>
using namespace std;

int main()
{
    double r;
    const double pi = 3.1415;
    double p = 0, s = 0;

    cout << "Moi thim nhap vao ban kinh: ";
    cin >> r;
    p = 2 * r * pi;
    s = r * r * pi;
    cout << "Chu vi hinh tron bang: " << p << endl;
    cout << "Dien tich hinh tron bang: " << s;
    return 0;
}
