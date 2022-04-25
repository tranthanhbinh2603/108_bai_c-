#include <iostream>
using namespace std;

int main()
{
    int n = 0, remainer = 0;

    cout << "Nhap dai 1 so nguyen duong: ";
    cin >> n;

    remainer = n % 2;
    switch (remainer)
    {
    case 0:
        cout << "Day la so chan";
        break;
    case 1:
        cout << "Day la so le";
        break;
    default:
        cout << "Cha hieu cai gi dang xay ra!";
        break;
    }

    return 0;
}
