#include <iostream>
#define N 295 //Xac dinh N = 295. Codeblock hien thi 295 hang tren man hinh
using namespace std;

int main()
{
    int a[N];
    for (int i = 0; i < N; i++)
    {
        a[i] = i;
    }
    cout << "In Mang: \n";
    for (int i = 0; i < N; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    return 0;
}
