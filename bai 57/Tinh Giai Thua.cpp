#include <bits/stdc++.h>
using namespace std;

long long DeQuy(int n)
{
    if (n == 1)
        return 1;
    return n * DeQuy(n - 1);
}

int main()
{
    cout << DeQuy(100);
}
