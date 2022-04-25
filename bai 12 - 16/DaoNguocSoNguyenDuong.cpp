#include <iostream>
using namespace std;

int main()
{
    int in = 0;

    cout << "Nhap 1 so nguyen duong co 3 chu so: ";
    cin >> in;

    cout << "Ket qua: " << ((in % 10) % 10) << ((in / 10) % 10) << (in / 100);
    return 0;
}
