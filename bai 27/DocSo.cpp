#include <iostream>
using namespace std;

int main()
{
    int n;
    int n_chuc, n_donvi;
    string kq;

    cout << "Nhap so n: ";
    cin >> n;

    n_chuc = n % 10;
    n_donvi = (n - (n % 10)) / 10;

    switch (n_donvi)
    {
    case 1:
        kq += "mot";
        break;
    case 2:
        kq += "hai";
        break;
    case 3:
        kq += "ba";
        break;
    case 4:
        kq += "bon";
        break;
    case 5:
        kq += "nam";
        break;
    case 6:
        kq += "sau";
        break;
    case 7:
        kq += "bay";
        break;
    case 8:
        kq += "tam";
        break;
    case 9:
        kq += "chin";
        break;
    }
    kq += " muoi ";
    switch (n_chuc)
    {
    case 1:
        kq += "muoi";
        break;
    case 2:
        kq += "hai";
        break;
    case 3:
        kq += "ba";
        break;
    case 4:
        kq += "bon";
        break;
    case 5:
        kq += "nam";
        break;
    case 6:
        kq += "sau";
        break;
    case 7:
        kq += "bay";
        break;
    case 8:
        kq += "tam";
        break;
    case 9:
        kq += "chin";
        break;
    }
    cout << "Ket qua: " << kq;
    return 0;
}
