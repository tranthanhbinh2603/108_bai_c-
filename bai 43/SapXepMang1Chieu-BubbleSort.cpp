#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
    srand(time(NULL));
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    int M[n];
    for (int i = 0; i < n; i++){
        M[i] = rand()%100;
    }
    cout << "Mang sau khi sinh ra la: \n";
    for (int i = 0; i < n; i++)
    {
        cout << M[i] << "\t";
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int z = i + 1; z < n; z++)
        {
            if (M[i] < M[z])
            {
                int tam = M[i];
                M[i] = M[z];
                M[z] = tam;
            }
        }
    }
    cout << "Mang sau khi sap xep la: \n";
    for (int i = 0; i < n; i++)
    {
        cout << M[i] << "\t";
    }


    return 0;
}
