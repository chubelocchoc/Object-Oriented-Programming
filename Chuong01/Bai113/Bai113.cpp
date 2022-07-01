#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int at = 2;
    int ahh;
    for (int i = 2; i <= n; i++)
    {
        ahh = at + 2 * i + 1;
        at = ahh;
    }
    cout << "Ket qua a(" << n << ") = " << ahh;
    return 1;
}