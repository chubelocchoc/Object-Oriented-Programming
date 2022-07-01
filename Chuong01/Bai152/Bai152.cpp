#include <iostream>
using namespace std;
int main()
{
    int n;
    int t;
    int flag = 1;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    t = n;
    while (t > 1)
    {
        if (t % 3 != 0)
            flag = 1;
        t = t / 3;
    }
    if (flag == 0)
    {
        cout << n << " la so co dang 3m";
    }
    else
    {
        cout << n << " khong co dang 3m";
    }
    return 1;
}