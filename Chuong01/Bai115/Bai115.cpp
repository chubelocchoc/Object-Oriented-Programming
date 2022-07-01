#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int at = -1;
    int ahh = 3;
    int as;
    int i = 2;
    while (i <= n)
    {
        as = 5 * ahh + 6 * at;
        at = ahh;
        ahh = as;
        i++;
    }
    cout << "Ket qua a(" << n << ") = " << ahh;
    return 1;
}