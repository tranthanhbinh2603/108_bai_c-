#include <iostream>
using namespace std;

int main()
{
    int h = 0;

    cout << "Nhap chieu cao: ";
    cin >> h;


    for (int i = 0; i <= h; i++)
    {
        for (int z = 0; z <= i; z ++)
        {
            if ((z == 0) || (i == z) || (i == h))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
