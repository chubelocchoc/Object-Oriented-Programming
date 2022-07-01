#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int att = -1;
    int at = 3;
    int ahh;
    int t = 2;
    for (int i = 2; i <= n; i++)
    {
        t *= 2;
        ahh = 5 * t + 5 * at - att;
        att = at;
        at = ahh;
    }
    cout << "Ket qua a(" << n << ") = " << ahh;
    return 1;
}