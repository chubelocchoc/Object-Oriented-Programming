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
        if (n % 5 != 0)
        {
            flag = 0;
        }
        t = t / 5;
    }
    if (flag)
    {
        cout << n << " la so nguyen duong co dang 5m";
    }
    else
    {
        cout << n << " khong co dang 5m";
    }
    return 1;
}