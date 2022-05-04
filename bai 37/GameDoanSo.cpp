#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    while (true)
    {
        //Dung random
        srand(time(NULL));
        int somay = 1 + rand()%100;

        int temp = 0;

        cout << "Nhap 1 so nhe: ";
        cin >> temp;

        int solan = 1;

        do
        {
            if (somay == temp)
            {
                break;
            }
            else
            {
                if (somay > temp)
                {
                    cout << "So ban nho hon so may" << endl;
                    solan++;
                }
                if (somay < temp)
                {
                    cout << "So ban lon hon so may" << endl;
                    solan++;
                }
                cout << "Nhap lai so nhe: ";
                cin >> temp;
            }
        }
        while (solan < 7);

        if (solan = 7)
        {
            if (somay == temp)
            {
                cout << "Ha ha ban tai that" << endl;
            }
            else
            {
                cout << "Ban da thua roi. So may la: " << somay << endl;
            }
        }
        cout << "Tiep khong ong ei. Nhap k de ket thuc: ";
        char tempchar;
        cin >> tempchar;
        if (tempchar == 'k')
        {
            break;
        }
        else
        {
            cout << "================================" << endl;
        }
    }

    return 0;
}
