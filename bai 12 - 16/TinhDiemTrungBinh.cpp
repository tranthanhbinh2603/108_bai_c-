#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double dtoan = 0, dly = 0, dhoa = 0;
    double dtb = 0;

    cout << "Nhap diem mon Toan: ";
    cin >> dtoan;
    cout << "Nhap diem mon Ly: ";
    cin >> dly;
    cout << "Nhap diem mon Hoa: ";
    cin >> dhoa;

    dtb = (dtoan + dly + dhoa) / 3;

    cout << "Diem trung binh: " << setprecision(3) <<dtb;
}
