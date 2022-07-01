#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "(Xuat day mua da) Nhap n: ";
    cin >> n;
    int ad = n;
    int as = ad;
    while (as > 1)
    {
        cout << as << " ";
        if (ad % 2 == 1)
        {
            as = 3 * ad + 1;
        }
        else if (ad % 2 == 0)
        {
            as = ad / 2;
        }
        ad = as;
    }
    cout << as << " ";
    return 1;
}