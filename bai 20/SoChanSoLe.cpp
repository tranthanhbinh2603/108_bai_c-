#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Nhap dai 1 so nguyen ban ei: ";
    cin >> n;

    //Cach 1:
//    if (n % 2 == 0)
//    {
//        cout << "So chan";
//    }
//    else
//    {
//        cout << "So le";
//    }

    //Cach 2:
    cout << (n % 2 == 0 ? "So chan" : "So le");
    return 0;
}
