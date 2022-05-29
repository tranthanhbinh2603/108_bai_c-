#include <bits/stdc++.h>
using namespace std;

int Random();
bool checkNumber(int numTrue, int numGuest);
bool preperNumber(int numTrue, int numGuest);

int main()
{
    srand(time(NULL));
    int num = Random();
    int num2;
    cout << "Moi ban nhap so: ";
    cin >> num2;

    int solan = 1;
    do
    {
        cout << "=================================\nBan dang o lan doan thu " << solan << endl;
        if (checkNumber(num, num2))
        {
            cout << "Ban da doan dung!!!!!!" << endl;
            break;
        }
        else
        {
            solan++;
            if (preperNumber(num, num2))
            {
                cout << "So ban doan nho hon so dung!!!!!" << endl;
            }
            else
            {
                cout << "So ban doan lon hon so dung!!!!!!" << endl;
            }
            cout << "Moi ban doan lai. Moi ban nhap so: " << endl;
            cin >> num2;
        }

    }
    while (solan <= 7);

    if (solan == 8)
    {
        if (checkNumber(num, num2))
        {
            cout << "Ban da doan dung!!!!!!" << endl;
        }
        else
        {
            cout << "Ban da thua!!!!!\nSo dung la: " << num;
        }
    }
}

int Random()
{
    return rand()&100;
}

bool checkNumber(int numTrue, int numGuest)
{
    if (numTrue == numGuest) return true;
    return false;
}

bool preperNumber(int numTrue, int numGuest) //Ham nay so sanh so doan co nho hon so thuc khong
{
    if (numTrue >  numGuest) return true;
    return false;
}
