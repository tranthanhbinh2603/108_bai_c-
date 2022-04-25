#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    double radian;
    const double pi = 3.14;

    cout << "Moi ban nhap 1 goc: ";
    cin >> x;

    radian = x * pi /180;
    double sinx = sin(radian); //Su dung thu vien math.h
    double cosx = cos(radian);
    double tanx = tan(radian);
    double cotx = 1.0/tan(radian);

    cout << "Sin la " << sinx << endl;
    cout << "Cos la " << cotx << endl;
    cout << "Tan la " << tanx << endl;
    cout << "Cot la " << cotx << endl;
    return 0;
}
