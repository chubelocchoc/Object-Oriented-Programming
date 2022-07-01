#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int at = 1;
    int ahh = 2;
    int as;
    int i = 2;
    if (n >= 1)
    {
        while (i <= n)
        {
            as = 4 * ahh + at;
            at = ahh;
            ahh = as;
            i++;
        }
    }
    else
    {
        ahh = 1;
    }
    cout << "Ket qua a(" << n << ") = " << ahh;
    return 1;
}