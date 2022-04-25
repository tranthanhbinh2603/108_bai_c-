#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int xA, yA; int xB, yB;

    cout << "Xin moi nhap toa do diem" << endl << "Diem A: " << endl;
    cout << "\tToa do xA: ";
    cin >> xA;
    cout << "\tToa do yA: ";
    cin >> yA;
    cout << "Diem B: " << endl;
    cout << "\tToa do xB: ";
    cin >> xB;
    cout << "\tToa do yB: ";
    cin >> yB;

    cout << "Do dai la: " << setprecision (2) <<sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    return 0;
}
