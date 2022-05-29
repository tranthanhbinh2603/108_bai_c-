#include <bits/stdc++.h>
using namespace std;

int sum(int a = 1, int b = 1)
{
    return a+b;
}

int main()
{
    int res1 = sum(3,2); //5
    int res2 = sum(3); //4
    int res3 = sum(); //2

    cout << res1 << " " << res2 << " " << res3;
}
