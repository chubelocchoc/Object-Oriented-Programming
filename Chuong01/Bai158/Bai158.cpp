#include <iostream>
using namespace std;
int main()
{
    int n;
    int t;
    int lc;
    int dem = 0;
    int dv;
    cout << "Nhap so n: ";
    cin >> n;
    t = n;
    lc = n % 10;
    while (t != 0)
    {
        dv = t % 10;
        if (dv > lc)
        {
            lc = dv;
        }
        t = t / 10;
    }
    cout << "Chu so lon nhat: " << lc << endl;
    t = n;
    while (t != 0)
    {
        dv = t % 10;
        if (dv == lc)
        {
            dem += 1;
        }
        t = t / 10;
    }
    cout << "So luong chu so lon nhat: " << dem;
    return 1;
}
