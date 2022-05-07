#include <iostream>
using namespace std;

int main()
{
    int h = 0;

    cout << "Nhap chieu cao: ";
    cin >> h;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if ((j == 0 && i <= h/2) || (j == h-1 && i >= h/2) || i==j || i==h/2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
