#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p;
    p = new int;
    *p = 100;
    cout << "At " << p << " "; //Mot chuoi that ki la
    cout << "is the value " << *p << "\n"; //Gia tri cua p
    delete p; //Khong can huy cung duoc
}
