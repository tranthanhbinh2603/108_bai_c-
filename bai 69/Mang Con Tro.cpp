#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p[5];

    int a = 6;
    int b;

    p[0] = &a;
    p[2] = p[0];
    b = *p[0];

    cout << "p[0] = " << *p[0] << endl;
    cout << "b = " << b << endl;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        p[i] = new int;
        *p[i] = i * 2;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "*p[" << i << "] = " << *p[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << "==>" << *p[i] << endl;
    }
}
