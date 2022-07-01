#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int at = -2;
    int t1 = 3;
    int t2 = 7;
    int ahh;
    for (int i = 2; i <= n; i++)
    {
        t1 *= 3;
        t2 *= 7;
        ahh = 5 * at + 2 * t1 - 6 * t2 + 12;
        at = ahh;
    }
    cout << "Ket qua a(" << n << ") = " << ahh;
    return 1;
}