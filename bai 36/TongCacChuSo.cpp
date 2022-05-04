#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    int sum = 0;

    cout << "Nhap so N: ";
    cin >> N;

    do
    {
        sum += N % 10;
        N = (N - (N % 10))/10;
    }
    while (N > 0);

    cout << "Tong: " << sum;
    return 0;
}
