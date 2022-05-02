#include <iostream>
using namespace std;

int main()
{
    double n = 0, i = 0;
    double sum = 0;

    cout << "n = ";
    cin >> n;
    while(i <= n)
    {
        sum += i;
        i++;
    }
    cout << "sum = " << sum;
    return 0;
}
