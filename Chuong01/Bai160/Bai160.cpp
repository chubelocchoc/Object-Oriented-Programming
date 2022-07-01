#include <iostream>
using namespace std;
int main()
{
    int n;
    int lc =0;
    int dem=0;
    int t;
    int dv=0;
    cout << "Nhap n: ";
    cin >> n;
    t = n;
    while (t != 0)
    {
        dv = t % 10;
        t = t / 10;
    }
    lc = dv;

    cout << "Chu so dau tien: " << lc << endl;
    t = n;
    while (t != 0)
    {
        dv = t % 10;
        if (dv == lc)
            dem ++;
        t = t / 10;
    }
    cout << "So luong: " << dem;
    return 1;
}