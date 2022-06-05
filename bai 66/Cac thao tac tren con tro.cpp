#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 20, b = 15;
    int *pa, *pb, temp;

    pa = &a; //pa nhận giá trị của a
    pb = &b;

    temp = *pa; //temp (không phải con trỏ) trỏ tới pa
    *pa = *pb;
    *pb = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b;
}
