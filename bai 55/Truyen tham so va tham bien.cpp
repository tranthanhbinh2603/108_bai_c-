#include <bits/stdc++.h>
using namespace std;

void ham1(int in)
{
    in = 10;
    cout << "Gia tri trong ham 1 la: " << in << endl;
}

void ham2(int &in)
{
    in = 20;
    cout << "Gia tri trong ham 1 la: " << in << endl;
}

int main()
{
    int a = 1;
    cout << "Gia tri ban dau: " << a << endl;
    ham1(a);
    cout << "Gia tri sau khi chay ham 1: " << a << endl;
    ham2(a); //Khong can dau &
    cout << "Gia tri sau khi chay ham 2: " << a << endl;
}
