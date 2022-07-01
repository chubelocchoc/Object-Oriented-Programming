#include <iostream>
using namespace std;
int main()
{
    int n;
    int t;
    int dem;
    int lc;
    int dv;
    cout << "Nhap n: ";
    cin >> n;
    lc = n % 10;
    t = n;
    while (t != 0)
    {
        dv = t % 10;
        if (dv < lc)
        {
            lc = dv;
        }
        t = t / 10;
    }
    cout << "So nho nhat: " << lc;
    t = n;
    dem = 0;
    while (t != 0)
    {
        dv = t % 10;
        if (dv == lc)
        {
            dem += 1;
        }
        t = t / 10;
    }
    cout << "So luong chu so nho nhat: " << dem;
    return 1;
}