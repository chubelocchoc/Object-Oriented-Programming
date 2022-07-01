#include <iostream>
using namespace std;

int main()
{
    int n;
    int flag = 1;
    int t;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    t = n;
    while (t > 1)
    {
        if (n % 2 != 0)
        {
            flag = 0;
        }
        t = t / 2;
    }
    if (flag == 1)
    {
        cout << "n co dang 2m";
    }
    else
    {
        cout << "n khong co dang 2m";
    }
    return 1;
}