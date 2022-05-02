#include <iostream>
using namespace std;

int main()
{
    double i = 0;
    double sum = 0;

    do
    {
        sum += i;
        i++;
    }
    while (i <= 5);
    cout << "sum = " << sum;
    return 0;
}
