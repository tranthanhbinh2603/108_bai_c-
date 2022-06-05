/*Viet ham hoan vi 2 bien thuc bang cach su dung 2 con tro. */

#include <bits/stdc++.h>
using namespace std;
//

void Swap(double*&pa,double*&pb)
{
    double temp=*pa;
    *pa=*pb;
    *pb=temp;
}
int main()
{
    double *a, *b;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;

    Swap(a, b);

    cout << "So thu nhat la: " << a << endl;
    cout << "So thu hai la: " << b;
}
