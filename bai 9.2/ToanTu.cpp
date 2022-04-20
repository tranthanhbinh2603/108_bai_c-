#include <iostream>
using namespace std;

int main()
{
//    int x = 5, y = 3;
//    int z = x-- - ++y + 2;
//    cout << "z = " << z;

    int x = 5, y = 10;
    int z = ++x - y-- + 2;
    cout << "z = " << z;
    return 0;
}
