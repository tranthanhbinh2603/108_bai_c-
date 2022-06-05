#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int *p;
    p = a;
    for (int i = 0; i < 10; i++)
    {
        *(p+i) *= 10;
        cout << "a[" << i << "] = " << a[i] << endl;
    }
}
