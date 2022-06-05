#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    float f = 5.5;
//    int *pa = &f;
//    float *pf = &a;

    void *p;
    p = &a;
    (*(int*)p) = 10;
    cout << "a = "<< a << endl;
    p = &f;
    (*(float*)p) = 20.5;
    cout << f << endl;

    int *y = &a;
    cout << *y << endl;
}
