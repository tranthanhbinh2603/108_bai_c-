#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 100;
    int *m = &count;
    cout << "Dia chi cua bien count = " << &count << endl;
    cout << "Gia tri cua bien count = " << count << endl;
    cout << "Dia chi cua con tro m = " << m << endl;
    cout << "Gia tri cua con tro m dang tro toi = " << *m << endl;

    int p = *m;
    cout << "gia tri cua p = " << p << endl;
    int *x = m;
    cout << "Dia chi cua con tro x = " << x << endl;
    cout << "Gia tri cua con tro x dang tro toi = " << *x<< endl;
    *x = 15;
    cout << "Gia tri cua con tro m dang tro toi = " << *m<< endl;
}
