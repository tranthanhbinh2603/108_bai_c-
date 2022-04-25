#include <iostream>
using namespace std;

int main()
{
    char kt;
    int maascii = 0;

    cout << "Nhap ki tu: ";
    cin >> kt;

    maascii = int(kt);

    cout << "Ma ASCII cua ki tu la " << maascii << endl;
    cout << "Ki tu tiep theo la " << char(maascii + 1);
    return 0;
}
