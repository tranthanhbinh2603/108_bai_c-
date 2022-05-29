#include <bits/stdc++.h>
using namespace std;

void DeQuy(int n)
{
    if (n > 0) //Diem dung
    {
        int t = n % 2; //Moi lan chay thi ta lay % in ra.
        DeQuy(n / 2); // Goi ham de quy
        cout << t << " "; // Dua vao stack de in ra
    }
}

int main()
{
    DeQuy(10000);
}
