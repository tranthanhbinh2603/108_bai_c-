#include <iostream>
using namespace std;

int main()
{
    int M[3];
    M[0] = 5;
    M[1] = -2;
    M[2] = 10;
    cout << M[0] << endl;
    cout << M[2] << endl;
    cout << M[3] << endl;
    cout << M[-1] << endl;
    cout << "-------------------\n";
    int X[] = {4, -5, 6, 0, 1, 2};
    cout << "X[5] = " << X[5];
    return 0;
}
